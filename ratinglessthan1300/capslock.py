s = input()
if len(s) == 1:
    if s.isupper():
        print(s.lower())
    else:
        print(s.upper())
else:
    if s[0].isupper():
        if s[1:].isupper():
            print(s.lower())
        else:
            print(s)
    else:
        if s[1:].isupper():
            print(s[0].upper() + s[1:].lower())
        else:
            print(s)