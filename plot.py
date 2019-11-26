import numpy as np
import matplotlib.pyplot as plt



def grafica(archivo):
    data = np.loadtxt(archivo)
    
    
    plt.figure(figsize=(14,4))
    
    plt.subplot(3,3,1)
    s = np.shape(data)
    print(s)
    Nx = s[1]
    Nt = s[0]
    plt.plot(Nx, Nt,  color='black')
    plt.xlabel("Nx")
    plt.ylabel("N iteraciones")


    plt.subplot(3,3,2)
    x = np.linspace(-1,1,n_x)
    dt = 1.0/Nt
    for i in range(Nt):
        if i%(Nt//9) == 0:
            plt.plot(x, data[i,:], color='black')
    plt.xlabel("Nx")
    plt.ylabel("Error Centro x10^2")
            
    plt.subplot(3,3,3)
    t = np.linspace(0,1,Nt)
    plt.plot(t, data[:,Nx//2], color='black')
    plt.xlabel("Nx")
    plt.ylabel("Error Convergencia x10^6")


    plt.savefig("imagen.png")
