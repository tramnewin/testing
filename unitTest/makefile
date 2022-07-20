unitTest:
	-@echo "--making main.cpp"
	gcc -fprofile-arcs -ftest-coverage ./main.cpp -o main -lstdc++
	ls

clean:
	rm -f testing main core
	rm -f *.gcda
	rm -f *.gcno
	rm -f *.gz
	rm -f *.gcov
	rm -f *.o