
'''
from tkinter import *
root = Tk()
root.title('Python GUI')
root.geometry('540x380+200+100')
#root.resizable()

photo = PhotoImage(file='heart.png', width=50, height=50)
#label = Label(root, text="이미지", image= image)

def btncmd():
    print('좋아요를 꾸욱 눌러주세요.')

btn1 = Button(root, image=photo, )
btn1.pack()


btn2 = Button(root, text='나버튼', padx=20, pady=20)
btn2.pack()

btn3 = Button(root, text='아무튼', width=10, height=5, fg="white",bg="red")
btn3.pack()


root.mainloop()
'''

# 레이블 사용하기
'''
lable = Lable(root, text ="누구인가")

photo = PhotoImage(file='heart.png')


lable.pack()
'''

# 레이블 새로 만들기

lable1 = Lable(root,text = '최선을 다하자')
lable1.pack()

def change():
    lable1.config(text = '최선을 다할껄')

btn = Button(root, text='클릭', command=change)
btn.pack()
