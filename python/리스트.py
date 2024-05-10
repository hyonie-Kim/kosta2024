#리스트 이름 = [값1,값2,값3]

##ktx  = []
##
##sum = 0;
##for i in range(0,100):
##    ktx.append(i+1)
##    sum = sum + ktx[i]
##
##print(ktx)
##print(sum)


## 리스트이름[:끝인덱스 +1]


#

ktx = [10,20,30,40]
print('현재 리스트:', ktx)

ktx.append(50)
print('append 함수 사용:끝에 50이 추가됨:', ktx)

ktx.pop()
print('pop함수 사용:',ktx)


ktx.reverse()
print('reverse 함수사용: 기존의 것을 반대로 만듦:',ktx)

ktx.sort()
print('sort 함수사용: 오름차순 정렬:',ktx)

ktx.remove(20)
print('remove 함수사용: 삭제하고 싶은 값을 넣으면됨:',ktx)

ktx.insert(1,'이건뭐야')
print('insert 함수사용: 첫번째 요소에 추가:',ktx)

tgv = [100,200,300]

ktx.extend(tgv)
print('extend 함수사용: 결합됨',ktx)

print('+  사용',ktx + tgv)


cntlist = len(ktx)
print('len함수', cntlist)
