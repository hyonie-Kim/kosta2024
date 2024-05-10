import requests
from bs4 import BeautifulSoup as bs
import pandas as pd

gabiapage = requests.get("https://library.gabia.com/")
soup = bs(gabiapage.text, "html.parser")

elements = soup.select('div.esg-entry-content a.eg-grant-element-0')


titles = []
links = []

for index, element in enumerate(elements, 1):
    titles.append(element.text)
    links.append(element.attrs["href"])

print(titles)
print(links)

df = pd.DataFrame()
df["titles"] = titles
df["links"] = links

df.to_excel('C:/Users/hyonie/Desktop/git_home/kosta2024/python/test.xlsx', sheet_name = "Sheet1")
