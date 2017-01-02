CPPFLAGS=-g -pthread
LDFLAGS=-g
LDLIBS=-lsfml-graphics -lsfml-window -lsfml-system -lglut -lGL


pps: main.o Planet.o Universe.o imgui.o imgui-SFML.o imgui_draw.o
		g++ $(LDFLAGS) -o pps main.o Planet.o Universe.o imgui.o imgui-SFML.o imgui_draw.o $(LDLIBS)

main.o: main.cpp imgui.o imgui-SFML.o
		g++ $(CPPFLAGS) -c main.cpp

Universe.o: Universe.cpp Universe.hpp
		g++ $(CPPFLAGS) -c Universe.cpp

Planet.o: Planet.cpp Planet.hpp
			g++ $(CPPFLAGS) -c Planet.cpp


imgui.o: imgui.cpp imgui.h
		g++ $(CPPFLAGS) -c imgui.cpp

imgui_draw.o: imgui_draw.cpp
		g++ $(CPPFLAGS) -c imgui_draw.cpp

imgui-SFML.o: imgui-SFML.h imgui-SFML.cpp
		g++ $(CPPFLAGS) -c imgui-SFML.cpp


clean:
	rm *.o
