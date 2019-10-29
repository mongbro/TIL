i,hap=0,0
for i in range(1, 1001, 2):
    hap+=i
    if hap>=1000:
        break
print("  %d"%i)
