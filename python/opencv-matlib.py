import cv2
import matplotlib.pylab as plt

img = cv2.imread('sea.jpg',1)
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)

plt.imshow(img)
plt.show()
