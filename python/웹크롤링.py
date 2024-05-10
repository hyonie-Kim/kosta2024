from bs4 import BeautifulSoup

homepage = open('ediya.html', 'r', encoding = 'utf-8')
doc = homepage.read()
homepage.close()

#print(doc)

soup = BeautifulSoup(doc,'html.parser')
result = soup.find_all('p', class_='each-menu')
#print(result)


for data in result:
    #print(data)
    print(data.text)
