import cv2

cap = cv2.VideoCapture(0)

while cap.isOpened():
    success, frame = cap.read()
    if success:
        cv2.imshow('Camera Window', frame)

        key = cv2.waitKey(1) & 0xFF
        if key ==27:
            break

cap.release()
cv2.destroyAllWindows()



# 동영상 파일 저장
'''
import cv2

cap = cv2.VideoCapture(0)

width = cap.get(cv2.CAP_PROP_FRAME_WIDTH)
height = cap.get(cv2.CAP_PROP_FRAME_HEIGHT)

print(width)
print(height)

fourcc = cv2.VideoWriter_fourcc(*'XVID')
writer = cv2.VideoWriter('test.avi', fourcc, 24, (int(width), int(height)))

while cap.isOpened():
    success, frame = cap.read()
    if success:
        writer.write(frame) #프레임 저장
        cv2.imshow("Video Window", frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        break

cap.release()
writer.release() #저장 종료
cv2.destroyAllWindows()

        
'''
