while True:
    print("1. Metric")
    print("2. Imperial")
    print("3. Exit")
    x=int(input("Enter Choice (1/2/3): "))
    if x==1:
        h=float(input("Enter height(m) : "))
        w=float(input("Enter weight(kg) : "))
        bmi=w/h**2
        print("BMI= ",bmi)
        if bmi<=18.5:
            print("Underweight")
        elif bmi>=25:
            if bmi>=30:
                print("Obese")
            else:
                print("Overweight")
        else:
            print("Normal")
    elif x==2:
        h=float(input("Enter height(in) : "))
        w=float(input("Enter weight(lbs) : "))
        bmi=(w*703)/h**2
        print("BMI= ",bmi)
        if bmi<=18.5:
            print("Underweight")
        elif bmi>=25:
            if bmi>=30:
                print("Obese")
            else:
                print("Overweight")
        else:
            print("Normal")
    elif x==3:
        break
    else:
        print("wrong input")