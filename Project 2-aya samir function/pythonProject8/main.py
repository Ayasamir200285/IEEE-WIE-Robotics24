print("Welcome to our site 😊")
birthdate = input("Please enter your birthdate (MM-DD-YYYY) 📅: ")

def Age_calculation(birthdate):
    birth_month = int(birthdate[:2])
    birth_day = int(birthdate[3:5])
    birth_year = int(birthdate[6:])

    todays_date = input("Please enter today's date (MM-DD-YYYY) 📅: ")
    today_month = int(todays_date[:2])
    today_day = int(todays_date[3:5])
    today_year = int(todays_date[6:])

    age_years = today_year - birth_year
    age_months = today_month - birth_month
    age_days = today_day - birth_day

    if age_days < 0:
        age_months -= 1

        if age_months in [1, 3, 5, 7, 8, 10, 12]:
            age_days += 31
        elif age_months in [4, 6, 9, 11]:
            age_days += 30
        else:

            age_days += 28

    if age_months < 0:
        age_years -= 1
        age_months += 12

    print("Your age is: " + str(age_years) + " years, " + str(age_months) + " months, and " + str(age_days) + " days")

Age_calculation(birthdate)



