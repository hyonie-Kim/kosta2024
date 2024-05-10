###friend - 친구 => key : value
##
###딕션너리 변수 = {키1:값1, 키2:값2....}
##
##product = {'컵라면': 1000, '삼각김밥':2000, '음료수': 1500}
##
##print(product)
##
###데이터 추가
##product['오뎅'] = 2000
##product['아이스크림'] = 3000
##
##print(product)
##
##
###데이터 삭제
##del(product['오뎅'])
##
##print(product)
##
##
###딕션너리이름.get(키)
##print(product.get('컵라면'))
##
###딕션너리이름.key() key 값만 출력
##print(product.keys())
##
##print(list(product.keys()))
##
##
###딕션너리이름.values()
##print(product.values())
##
##print(list(product.values()))
##
##
##item = input('상품을 입력하세요: ')
##
##if'음료수'in product:
##    print('상품이 있습니다,')
##else:
##    print('상품이 없습니다')
##
##
##
##word = {'boy':'소년', 'gir':'소녀', 'family':'가족'}
##print(word)



#나라 : 수도

capital = {

    '네팔': '카트만두',
    '대한민국' :'서울',
    '일본':'도쿄',
    '중국':'베이징',
    '이탈리아': '로마',
    '러시아': '모스크바',
    '독일':'베를린',
    '미국': '워싱턴',
    '프랑스': '파리',
    '이라크': '바그다드',
    '인도': '뉴델리',
    '브라질': '브라질리아',
    '캐나다': '오타와',
    '룩셈브르크': '룩셈부르크',
    '헝가리': '부타페스트'


    }
while(True):
    contry = input(str(list(capital.keys())) + '나라의 수도는 무엇일까요?')

    if contry in capital:
        print(contry,'의 수도는',capital.get(contry),'입니다.')
    elif contry=='q':
        break;
    else:
        print('그런나라가 없습니다')
                   

       
        
        

