imagen.png: datos.dat plot.py clase31.cpp
	python plot.py

%.dat : a.out
	./a.out

a.out: clase31.cpp
	c++ clase31.cpp

clean:
	rm datos.dat a.out
