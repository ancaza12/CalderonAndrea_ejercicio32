import os
import numpy as np
import matplotlib.pyplot as plt

t= np.linspace(0,0.1,10)
plt.figure(figsize=(10,5))
data = np.loadtxt('ej32.dat')

plt.subplot(131)
plt.plot(data[:,1],data[:,0])
plt.xlabel('Posicion')
plt.ylabel('tiempo')

plt.subplot(132)
plt.plot(data[:,2], data[:,0])
plt.xlabel('Posicion')
plt.ylabel('psi')

plt.subplot(133)
plt.plot(data[:,1], data[:,2])
plt.xlabel('tiempo')
plt.ylabel('psi(L/4)')

plt.savefig('ej32.png')
