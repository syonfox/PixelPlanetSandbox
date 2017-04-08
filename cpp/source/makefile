CPPFLAGS=-g -pthread -std=c++14
LDFLAGS=-g -std=c++14
LDLIBS=-lsfml-graphics -lsfml-window -lsfml-system -lglut -lGL


pps: main.o Planet.o Universe.o CircularArray.o imgui.o imgui-SFML.o imgui_draw.o
		g++ $(LDFLAGS) -o pps main.o CircularArray.o Planet.o Universe.o imgui.o imgui-SFML.o  imgui_draw.o $(LDLIBS)

main.o: main.cpp imgui.o imgui-SFML.o
		g++ $(CPPFLAGS) -c main.cpp

Universe.o: Universe.cpp Universe.hpp Planet.o
		g++ $(CPPFLAGS) -c Universe.cpp

Planet.o: Planet.cpp Planet.hpp CircularArray.o
			g++ $(CPPFLAGS) -c Planet.cpp

CircularArray.o: CircularArray.cpp CircularArray.hpp
			g++ $(CPPFLAGS) -c CircularArray.cpp

imgui.o: imgui.cpp imgui.h
		g++ $(CPPFLAGS) -c imgui.cpp

imgui_draw.o: imgui_draw.cpp
		g++ $(CPPFLAGS) -c imgui_draw.cpp

imgui-SFML.o: imgui-SFML.h imgui-SFML.cpp
		g++ $(CPPFLAGS) -c imgui-SFML.cpp


testCA.o: testCA.cpp  CircularArray.o
		g++ $(CPPFLAGS) -c testCA.cpp

catest: testCA.o CircularArray.o
		g++ $(LDFLAGS) -o catest testCA.o CircularArray.o $(LDLIBS)


clean:
	rm *.o pps
