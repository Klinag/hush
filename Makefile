TARGET = Count_sort

$(TARGET) : sotrMain.cpp sortPodch.cpp
	g++ sotrMain.o sortPodch.o -o $(TARGET)

sotrMain.o : sotrMain.cpp
	g++ -c sotrMain.cpp -o sotrMain.o

sortPodch.o : sortPodch.cpp
	g++ -c sortPodch.cpp -o sortPodch.o




