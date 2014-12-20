TARGETS = A.txt actor.txt

all: $(TARGETS)
A.txt : NestedState.txt
	java -jar ../../../utah01/dist/utah01.jar NestedState.txt
actor.txt : NestedState.txt
	java -jar ../../../utah01/dist/utah01.jar NestedState.txt
