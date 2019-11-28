import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt('ej32.dat')
plt.plot(data[:,0], data[:,1])

plt.xlabel('X')
plt.ylabel('Y')


##fig = plt.figure()
##ax1 = fig.add_subplot(111,projection='3d')

##for k in P.keys():
##    plt.plot(P[k]['x'], P[k]['y'], P[k]['z'], c='black')

plt.savefig('ej32.png')
