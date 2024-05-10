import cv2
print(cv2.__version__)

# 이미지 읽기
img = cv2.imread('heart.png',1)
img2 = cv2.imread('heart.png', cv2.IMREAD_GRAYSCALE)

# 이미지 화면에 표시
cv2.imshow('Test', img)
cv2.imshow('Test', img2)
cv2.waitKey(0)

# 이미지 윈도우 삭제
cv2.destroyAllWindows()

# 이미지 다른 파일로 저장
cv2.imwrite('test2.jpg',img2)


'''
# 이미지 읽기
img = cv2.imread('heart.png',1)
img2 = cv2.imread('heart.png',cv2.IMREAD_GRAYSCALE)

cv2.imshow('Test', img)
cv2.imshow('Test', img2)
cv2.waitKey(0)

#이미지 윈도우 삭제
cv2.destroyAllWindows()


#이미지 다른 파일로 저장
cv2.imwrite('test2.jpg',img2)
'''
