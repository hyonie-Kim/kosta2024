# 키-값 추가하기

'''
my_dict = {}
my_dict['name'] = 'kim'

print(my_dict)
'''

# 키 값 출력
'''
my_dict = {'name': 'kim', 'age': 25, 'city': 'seoul'}
my_dict['age']

print(my_dict['age'])
'''

# 키- 값 추가하기
'''
my_dict = {'name': 'kim', 'age': 25, 'city': 'seoul'}
my_dict['job']='developer'

print(my_dict)
'''

# 키 제거
'''
my_dict = {'name': 'kim', 'age': 25, 'city': 'seoul'}
del my_dict['age']

print(my_dict)
'''
#키만 출력
'''

my_dict ={'name': 'kim', 'age': 25, 'city': 'seoul'}

for key in my_dict.keys():
    print(key)

print(my_dict.keys())

'''

#값만 출력

my_dict ={'name': 'kim', 'age': 25, 'city': 'seoul'}

for value in my_dict.values():
    print(value)
