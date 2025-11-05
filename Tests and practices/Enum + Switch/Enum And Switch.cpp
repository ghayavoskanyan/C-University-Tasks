#include <iostream>

enum EyeColor {
    Brown = 1,
    Blue = 22,
    Green = 3,
    Gray = 4,
    Heterochromia,
    Other
};

/* էս ֆունկցիայի դեպքում արդեն օքեյ ա blue = 22;-ը */
void getEyeColorDetails (EyeColor myEyeColor) {
    switch (myEyeColor) {
    case Brown: std::cout << "70% of the population has brown eyes, making it the most common eye color worldwide. Scientists believe that everyone on Earth had brown eyes around 10,000 years ago. People with brown eyes are less likely to develop eye cancer, macular degeneration, and diabetic retinopathy than those with lighter colored eyes."; 
    break;

    case Blue: std::cout << "Blue is the second most common eye color globally, with estimates suggesting that 8–10% of people have blue eyes. In the U.S., that proportion is higher, at about 27%. Scientists believe that it is possible to trace all blue-eyed people back to a common ancestor, who likely had a genetic mutation that reduced the amount of melanin in the iris. Most people with blue eyes are of European descent."; 
    break;

    case Green: std::cout << "An estimated 2% of the population has green eyes, making them very rare overall. However, green eyes are very common in some parts of the world, including Ireland and Scotland. In the U.S., about 9% of people have green eyes, and most of them descend from ancestors from Ireland and Scotland."; 
    break;

    case Gray: std::cout << "Close to 3% of the population has gray eyes. People with gray eyes are perceived as mysterious and wise. They often experience Photophobia (sensitivity to light) with a mild to moderate reaction to bright sunlight."; 
    break;

    case Heterochromia: std::cout << "Heterochromia - in which a person has more than one eye color -affects less than 1% of people. The two eyes might be completely different from one another, or one part of the iris might be different than the rest."; 
    break;

    case Other: std::cout << "Your eye color is very rare!"; 
    break;
    }
}

int main () {
    //Սա լավը չի, որովհետև եթե գրած լինի Blue = 22, ինքը սա բաց կթողնի
    //Ierate Through Enum
    /* for (int myEyeColor = Brown; myEyeColor != Other; myEyeColor++) {} */
     
    /*Cast Int To Enum */
    // int userNumber = 2; //Սա լավը չի, որովհետև կարող ա էնպիսի թիվ է ներմուծում, որին համապատասխան տարր չկա Enum-ում
    // EyeColor eyeColorEnum = (EyeColor) userNumber;
        
    getEyeColorDetails (Brown);
    
    return 0;
}
