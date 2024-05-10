bus = 10
taxi = 20
truck = 20

# sum = bus + taxi + truck
# print(sum)

vehicles = [10, 20, 20]
print(vehicles)

'''
ktx = [1,2,3,4,5,6,7,8,9] #정수 초기화

ktx = [3.14, 1.59, 2.65] #실수 초기화

ktx = ['대한민국은', '민주공화국이다'] #두개의 문자열

ktx= [1,2, '박수', 4,5, '박수']
'''

# 리스트 반복문
'''
ktx = [1,2,3,4,5,6,7,8,9,10]

sum = 0
for i in range(0,10):
    sum = sum + ktx[i]

print(sum)
'''

# 리스트 반복문 2
'''
ktx = [1,2,3,4,5,6,7,8,9,10]

sum = 0
for i in range(0,10):
    sum = sum + ktx[i]

for i in range(0,5):
    ktx.append(100+i)


print(sum)
print(ktx)
'''

# 빈문자열 1부터 100까지 더하기

'''
ktx = []  #빈 리스트 생성

sum = 0
for i in range(0,100):  
    ktx.append(i+1)  #1부터 100까지 숫자를 리스트에 추가


for i in range(0,100):
    sum += ktx[i]


print(ktx)  #[1,2,3,4,...,100]
print(sum)  #5050
'''

# 리스트이름[시작인덱스:끝인덱스+1]
'''
ktx=[10,20,30,40,50,60,70]

print(ktx[0:2])  #[10, 20]
print(ktx[2:6])  #[30, 40, 50, 60]


# 리스트이름[ :끝인덱스+1]
# 리스트이름[시작인덱스:]
print(ktx[:3])  #[10, 20, 30]
print(ktx[3:])  #[40, 50, 60, 70]
'''

# 리스트간의 연산
# 리스트 + 리스트
# 연산자 오버로딩

'''
ktx = [10,20,30]
tgv = [40,50,60]

print(ktx+tgv)  #[10, 20, 30, 40, 50, 60]
print(ktx*3)  #[10, 20, 30, 10, 20, 30, 10, 20, 30]


ktx[0] = 100  #첫번째 요소를 100으로 수정
ktx[2] = 300  #세번째 요소를 300으로 소정
print(ktx) #출력 [100,20,300]
'''

'''
ktx = [10,20,30,40]
tgv = [40,50,60]

ktx[2:3] = [300,301,302]
print(ktx)  #출력: [10, 20, 300, 301, 302, 40]

'''

# 리스트의 총합
'''
list = [1, 2, 3, 4, 5]
sum = 0
for i in list:
    sum+=i
    
print(sum)

'''
# 최대값 찾기
'''

list = [10, 20, 30, 40, 50]

list.sort(reverse=True)
print(list[0])

print(max(list))

'''
# 사용자에게 입력값 받고 출력
'''
list = []

for i in range(1,6):
    num = int(input(f'{i}번째 정수를 입력해주세요.'))
    list.append(num)

print("입력한 숫자 목록:",list)

'''
# 두개의 리스트 [1,2,3] [4,5,6]을 리스트출력

a = [1, 2, 3]
b = [4, 5, 6]

a.extend(b)
print(a)
