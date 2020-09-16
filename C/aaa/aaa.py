import discord

    
class schedule: #일정 클래스
 d = "0"
 h = '0'
 m = '0'
 name = '일정이름'
#-----------
class Calandar: #달력 클래스
 calandar = [] #달력

 def __init__(self):
  s = schedule()
  self.calandar = [s for i in range(31)]
  #for i in range(31):
   #self.calandar[i] = s 


 def add(self, d, h, m, name): #일정 추가
   s = schedule()
   s.d = d
   s.h = h
   s.m = m
   s.name = name
   calandar[int(s.d)] = s
 
 def schedules():
  for i in range(31):
   day = calandar[i]
   if(day.name != "일정이름"):
    d = day.d
    h = day.h
    name = day.name
    sntnce = d + '일' + h + ':' + m + '-->' + name
    return sntnce
  
 def __del__(self):
  f = self.open("schedule.txt","w")
     

  f.close()


#----------
cal = Calandar() # 달력 인스턴스
    

#---------
def init(): #달력 초기화

 f = self.open("schedule.txt","r")
 data = f.read()
 f.close()
 datasplit = data.split()
    
 i = 4
 test = 'a'
 for word in datasplit:
  s = schedule()
  if i == 4 :
   i -= 1
   s.d = word
   test = test + word
  if i == 3 :
   i -= 1
   s.h = word
   test = test + word
  if i == 2 :
   i -= 1
   s.m = word
   test = test + word
  if i == 1 :
   i = 4
   s.name = word
   test = test + word
  cal.calandar[int(s.d)] = s

#디스코드 코드 ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ
client = discord.Client()

@client.event
async def on_ready():
 print(f'{client.user}에 로그인하였습니다!')
 init()
    
@client.event
async def on_message(message):
 string = message.content.split()

 #사용자 입력 처리
 if message.content.startswith('ping'): #테스트용
  await message.channel.send('pong')

 elif string[1].startswith('추가'): #일정 추가 커맨드
  cal.add1(s[2], s[3], s[4], s[5])
  await message.channel.send('bot--일정 저장 완료')

 elif string[0].startswith('일정'): #일정 확인 커맨드
  schedules = cal.schedules()
  await message.channel.send( schedules) 






 #봇끼리 통신처리



client.run('')


