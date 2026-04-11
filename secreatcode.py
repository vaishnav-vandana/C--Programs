#  secreat code 
while True:

    st=input("enter the messege :")
    words=st.split()

    coding = input("1 for coding or 0 or decoding:")
    coding = True if (coding=="1") else False 

    print(coding)

    if (coding):
        nwords = []
        for word in words:
            if len(word)>=3:
                r1="asdfghjkl"
                r2="poiuytrew"
                stnew = r1 + word [1:] + word[0] + r2
                nwords.append(stnew)
            else:
                nwords.append(word[::-1])     # for backward messege
    else:
        nwords=[]
        for word in words:
            if (len(word)>=3):
                stnew=word[9:-9]
                if len(stnew) > 0:
                    stnew = stnew[-1] + stnew[:-1]
                nwords.append(stnew)
            else:
                nwords.append(word[::-1])

    print(" ".join(nwords))


  

