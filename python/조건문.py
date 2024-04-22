##a = 11
##if a > 10:
##    print('a는 10보다 큽니다.')
##    print('콘솔에 출력됩니다.')
##    print('참 쉽죠잉?')
##    

##id = 'hyonie'
##pw = '1234'
##
##userid = input('사용자 아이디: ')
##userpw = input('사용자 비밀번호: ')
##
##if id == userid:
##    if pw == userpw:
##        print('로그인 되었습니다.')
##    else:
##        print('비밀번호가 틀렸습니다.')
##else:
##    print('아이디가 틀렸습니다.')
##      
'''
좋아하는 과목입력하기
'''

##subject = input('좋아하는 과목은?: ')
##
##if subject == 'python:'
##    print('내가 좋아하는 과목은 파이썬입니다.')
##elif subject == 'java':
##    print('내가 좋아하는 과목은 자바입니다.')
##elif subject == 'C#':
##    print('내가 좋아하는 과목은 C#입니다.')
##elif subject == 'node.js':
##    print('내가 좋아하는 과목은 node.js입니다.')
##else:
##    print('내가 좋아하는 과목은 없습니다.')

'''
전화기 단축키 예제
'''

##shortcut = int(input('단축키를 입력하세요:'))

'''
입력한 월에 해당하는 계절 출력

1,2,12월 겨울
3-5월 봄
6-8월 여름
9-11월 가을
'''

##month = int(input('월을 입력하세요.:'))
##
##if month == 1 or month == 2 or month == 12:
##    print('겨울입니다.')
##elif month > 3  and month < 5:
##    print('봄입니다.')
##elif month > 6  and month < 8:
##    print('여름입니다.')
##elif month > 9  and month < 11:
##    print('가을입니다.')
##else:
##    print('해당 월은 없습니다.')
##    

'''
학점 출력하기
100-91 A학점
90-81 B학점

70-61 D학점.. 60이하는 F학점. 수의범위는 0-100까지
'''
##score = int(input('점수를 입력하세요.:'))
##
##if score <=100 and score > 90:
##    print('A학점입니다.')
##elif score <= 90 and score > 80:
##    print('B학점입니다.')
##elif score <= 80 and score > 70:
##    print('C학점입니다.')
##elif score <= 70 and score > 60:
##    print('D학점입니다.')
##elif score <= 60 and score >= 0:
##    print('F점입니다.')
##else:
##    print('입력값이 잘못되었습니다.')
'''
자판기 구매여부
'''
##print('========= 자판기 메뉴 =========')
##print('1.음료 1000원, 2과자 2000원 3.껌 500원')
##print()
##
##cracker = 2000
##drink = 1000
##ggum = 500
##
##money = int(input('insert Coin: '))
##
##if money >= cracker:
##    print('과자, 음료, 껌, 모두 구매할수 있습니다.')
##elif money < cracker and money >= drink:
##    print('음료, 껌을 구매할수 있습니다.')
##elif money < drink and money >= ggum:
##    print('껌을 구매할수 있습니다.')
##else:
##    print('아무것도 구매할수 없습니다.')

'''
아무것도 처리 안할때
'''
idnum = input('나이를 입력하세요:')

if int(idnum) >= 19:
    pass
else:
    print('신분증을 제시하세요.')
    
