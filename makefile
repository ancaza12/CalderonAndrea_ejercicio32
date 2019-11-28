ej32.png : ej32.dat ej32.py
	python ej32.py
    
ej32.dat : ej32.x
	./ej32.x > ej32.dat

ej32.x : ej32.cpp
	c++ ej32.cpp -o ej32.x

clean:
	rm -rf ej32.x ej32.dat ej32.png
