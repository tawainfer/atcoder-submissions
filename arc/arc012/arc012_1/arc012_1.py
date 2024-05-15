day = input()
if day in {'Saturday', 'Sunday'}:
  print(0)
  exit()

days = ['', 'Friday', 'Thursday', 'Wednesday', 'Tuesday', 'Monday']
for i in range(len(days)):
  if days[i] == day:
    print(i)
    exit()