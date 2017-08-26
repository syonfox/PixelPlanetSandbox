Pixel Planet Sandbox
====================

A planet simulator that dose n body gravitations simulations in 2d space

requiremnts for compialing:

sfml 2.4.1+
freeglut3
 note I forget if you need other stuff but if you want compile a tutorial for compialing on your platform and add it bellow:



Debian/ Friends:
tested on Franken Sid Debian (just sid)

need dev tools? (Note: you need a non ancent version of g++ I thinkg somting v5+ I use g++-6)
```apt install make git g++```

install sfml: (note: If runing jessie you will need to install sid sfml see bellow)
```apt install libsfml-dev ```

install freeglut3
```apt install freeglut3-dev```

```
git clone https://github.com/syonfox/PixelPlanetSandbox.git

cd PixelPlanetSandbox/cpp/source
make
./pps
```


Debian jessie new sfml
```
# using debian jessie

git clone https://github.com/syonfox/PixelPlanetSandbox.git
cd PixelPlanetSandbox/
cd cpp
cd source
make            #//FAIL

#add lines for sid (to mix with jessie) to build new sfml
#  Note this will probably mess some things for all eternity, 
#  but it might be worth it to have "some" up to date build environment
#  and there is probably a better way!

sudo echo "deb http://deb.vanvps.com/debian/ sid main non-free contrib" >>/etc/apt/sources.list
sudo echo "deb-src http://deb.vanvps.com/debian/ sid main contrib" >>/etc/apt/sources.list
sudo cat <<EOF > /etc/apt/preferences

Package: *
Pin: release a=stable
Pin-Priority: 700

Package: *
Pin: release a=testing
Pin-Priority: 650

Package: *
Pin: release a=unstable
Pin-Priority: 600
EOF

sudo apt-get update

mkdir -p ~/src/debian/; cd ~/src/debian
apt-get  source libsfml-dev/unstable -t unstable
cd libsfml-2.4.1+dfsg/

sudo mk-build-deps -i -r libsfml-dev
sudo apt-get install build-essential dpatch fakeroot devscripts equivs lintian quilt 
sudo apt --fix-broken install # ^^^^^ oops, need the unstable stuff vvvvvv
sudo apt-get install build-essential/unstable dpatch/unstable fakeroot/unstable devscripts/unstable equivs/unstable lintian/unstable quilt/unstable cmake/unstable -t unstable
sudo dpkg -i libsfml-build-deps_2.4.1+dfsg-2_amd64.deb #the dependancies

fakeroot debian/rules binary  # like 'make'
cd .. # all the shiny new binary packages should be here! 
ls
sudo dpkg -i ./libsfml-dev_2.4.1+dfsg-2_amd64.deb 
sudo dpkg -i ./libsfml-*_2.4.1+dfsg-2_amd64.deb #note the glob (*)
cd ..
cd PixelPlanetSandbox/
cd cpp/
cd source/
make clean
make
./pps #//SUCCESS!
exit # (to save the .bash_history)
```
