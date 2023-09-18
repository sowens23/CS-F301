Prog = hw00
# Dep1 = link
# Dep2 = linkedlist

run: $(Prog)
	./$(Prog)

$(Prog): $(Prog).o
	g++ -std=c++17 -o $(Prog) $(Prog).cpp

$(Prog).o: $(Prog).cpp
	g++ -std=c++17 -c $(Prog).cpp

# Using Dep1 and Dep2
# $(Prog): $(Prog).o $(Dep1).o $(Dep2).o
# 	g++ -std=c++17 -o $(Prog) $(Prog).o $(Dep1).o $(Dep2).o

# $(Prog).o: $(Prog).cpp $(Dep1).h $(Dep2).h
# 	g++ -std=c++17 -c $(Prog).cpp

# $(Dep1).o: $(Dep1).cpp $(Dep1).h 
# 	g++ -std=c++17 -c $(Dep1).cpp

# $(Dep2).o: $(Dep2).cpp $(Dep2).h 
# 	g++ -std=c++17 -c $(Dep2).cpp

clean:
	rm -f *.o

cleanest: clean
	rm $(Prog)
	
.PHONY: clean cleanest run
