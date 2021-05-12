character = {"skill" : ["1", "2", "3"]}
for key in character:
    for s in character.get(key):
        print(key, ':', s)