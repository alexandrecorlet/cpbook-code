from datetime import date

s = date(2010, 8, 9)
t = date.today()
print(s.strftime("%a"))
print(f"{(t-s).days} day(s) ago.")

