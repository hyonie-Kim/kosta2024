##num1 = int(input('첫번째 정수를 입력하세요.'))
##num2 = int(input('두번째 정수를 입력하세요.'))
##
##def plus(a,b):
##    return a + b
##
##print(plus(num1,num2))
##
##def minus(a,b):
##    return a - b
##print(minus(10,20))
##
##def multiple(a,b):
##    return a * b
##print(multiple(10,20))
##
##def divide(a,b):
##    return a / b
##print(divide(10,20))

##dan = int(input('단수를 입력하세요.'))
##
##
##def gugudan(num):
##    for i in range(1,10,1):
##        print('%d * %d = %d' % (num, i, num*i))
##    
##
##gugudan(dan)

##id = 'hyonie'
##pw = '1234'
##
##
##def account(x,y):
##    if userid == x:
##        if userpw == y:
##            print('로그인 되었습니다.')
##        else:
##            print('비밀번호가 틀렸습니다.')
##    else:
##        print('아이디가 틀렸습니다.')
##
##userid = input('사용자 아이디: ')
##userpw = input('사용자 비밀번호: ')
##
##account(id, pw)



def coffee_machine(sel_coffee):
    if sel_coffee == '아아':
        print('3. 아아를 탄다.')
    elif sel_coffee == '카페라떼':
        print('3.카페라떼를 탄다.')
    elif sel_coffee == '카페모카':
        print('3.카페모카를 탄다.')
    else:
        print('아무거나 탄다')
    print('4. 물을 붓는다.')
    print()

#주문
coffee = input('커피를 선택하시오.(아아, 카페라떼, 카페모카)')
print()
print('1.물을 준비한다.')
print('2.컵을 준비한다.')

coffee_machine(coffee)

print(coffee,'서비스완료')
