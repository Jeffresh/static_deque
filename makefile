CXX = clang++
OBJS =  test.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o test

clean:
	$(RM) main $(OBJS) core *~