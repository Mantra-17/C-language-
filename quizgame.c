#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char question[256];
    char options[4][100];
    int answer; // Index of the correct option (0-3)
} Question;
  Question ramayana_questions[50]; 
Question mahabharata_questions[50]; 
Question gk_questions[50]; 
void initialize_questions() {

    // Ramayana Questions
ramayana_questions[0] = (Question){"Who is the main character in Ramayana?", {"Rama", "Lakshmana", "Ravana", "Hanuman"}, 0};
ramayana_questions[1] = (Question){"Who is the wife of Lord Rama?", {"Sita", "Mandodari", "Tara", "Kaikeyi"}, 0};
ramayana_questions[2] = (Question){"Who abducted Sita?", {"Indrajit", "Surpanakha", "Ravana", "Vibhishana"}, 2};
ramayana_questions[3] = (Question){"Who is the brother of Lord Rama?", {"Sugriva", "Lakshmana", "Jatayu", "Hanuman"}, 1};
ramayana_questions[4] = (Question){"Which kingdom did Lord Rama belong to?", {"Ayodhya", "Mithila", "Lanka", "Dwaraka"}, 0};
ramayana_questions[5] = (Question){"Who is the father of Lord Rama?", {"Dasaratha", "Janaka", "Sugriva", "Dashanana"}, 0};
ramayana_questions[6] = (Question){"Who helped Lord Rama build the bridge to Lanka?", {"Sugriva", "Vibhishana", "Hanuman", "Nala and Nila"}, 3};
ramayana_questions[7] = (Question){"Who is the mother of Lord Rama?", {"Kausalya", "Kaikeyi", "Sumitra", "Mandodari"}, 0};
ramayana_questions[8] = (Question){"Who is the demon king of Lanka?", {"Vibhishana", "Ravana", "Kumbhakarna", "Indrajit"}, 1};
ramayana_questions[9] = (Question){"Who is the loyal devotee of Lord Rama?", {"Hanuman", "Jatayu", "Lakshmana", "Vibhishana"}, 0};
ramayana_questions[10] = (Question){"Who was turned into stone by a curse and later liberated by Lord Rama?", {"Mandodari", "Tara", "Ahalya", "Kaikeyi"}, 2};
ramayana_questions[11] = (Question){"Who is the brother of Ravana?", {"Sugriva", "Indrajit", "Vibhishana", "Hanuman"}, 2};
ramayana_questions[12] = (Question){"What is the name of Ravana's son?", {"Indrajit", "Vibhishana", "Kumbhakarna", "Angada"}, 0};
ramayana_questions[13] = (Question){"Who shot the arrow that killed Ravana?", {"Lakshmana", "Rama", "Hanuman", "Sugriva"}, 1};
ramayana_questions[14] = (Question){"What is the name of Lord Rama's bow?", {"Pinaka", "Gandiva", "Sharanga", "Vajra"}, 2};
ramayana_questions[15] = (Question){"Who is the king of Kishkindha?", {"Rama", "Hanuman", "Sugriva", "Bali"}, 3};
ramayana_questions[16] = (Question){"What was the name of the bird that tried to save Sita?", {"Garuda", "Jatayu", "Takshaka", "Sampati"}, 1};
ramayana_questions[17] = (Question){"Who crowned Lord Rama after he returned from exile?", {"Lakshmana", "Bharata", "Vashishtha", "Hanuman"}, 1};
ramayana_questions[18] = (Question){"How many years was Lord Rama exiled for?", {"10", "12", "14", "16"}, 2};
ramayana_questions[19] = (Question){"Who granted Ravana his powers?", {"Shiva", "Brahma", "Vishnu", "Indra"}, 1};
ramayana_questions[20] = (Question){"Who performed Sita's 'Swayamvara'?", {"Ravana", "Dasaratha", "Janaka", "Dashanana"}, 2};
ramayana_questions[21] = (Question){"What was the name of the demoness who tried to seduce Rama and Lakshmana?", {"Surpanakha", "Tataka", "Mandodari", "Kaikeyi"}, 0};
ramayana_questions[22] = (Question){"Who informed Rama about Sita's abduction?", {"Hanuman", "Vibhishana", "Jatayu", "Lakshmana"}, 2};
ramayana_questions[23] = (Question){"Who was the mother of Ravana?", {"Kaikesi", "Mandodari", "Tadaka", "Ahalya"}, 0};
ramayana_questions[24] = (Question){"Who was the original ruler of Lanka before Ravana?", {"Kubera", "Indrajit", "Vibhishana", "Bali"}, 0};
ramayana_questions[25] = (Question){"What weapon did Rama use to kill Ravana?", {"Pashupatastra", "Brahmastra", "Vajra", "Sharanga"}, 1};
ramayana_questions[26] = (Question){"Who was Sugriva's elder brother?", {"Angada", "Bali", "Jambavan", "Hanuman"}, 1};
ramayana_questions[27] = (Question){"Which sage advised Rama to go to Kishkindha?", {"Vashishtha", "Agastya", "Valmiki", "Vishwamitra"}, 3};
ramayana_questions[28] = (Question){"Who killed Bali?", {"Sugriva", "Rama", "Hanuman", "Lakshmana"}, 1};
ramayana_questions[29] = (Question){"Who composed the Ramayana?", {"Valmiki", "Vyasa", "Vishwamitra", "Tulsidas"}, 0};
ramayana_questions[30] = (Question){"Who helped Hanuman burn Lanka?", {"Nala", "Vibhishana", "Lakshmana", "Agni"}, 3};
ramayana_questions[31] = (Question){"What was the name of the forest where Rama spent his exile?", {"Dandakaranya", "Naimisha", "Kishkindha", "Chitrakoot"}, 0};
ramayana_questions[32] = (Question){"How did Rama prove Sita's purity after rescuing her?", {"By trial of fire", "By oath", "By test of strength", "By meditation"}, 0};
ramayana_questions[33] = (Question){"What was the name of the demoness who helped Hanuman find Sita in Lanka?", {"Trijata", "Surpanakha", "Mandodari", "Kaikeyi"}, 0};
ramayana_questions[34] = (Question){"Who was Lakshmana's wife?", {"Sita", "Mandavi", "Urmila", "Shrutakirti"}, 2};
ramayana_questions[35] = (Question){"What was the real name of Ravana?", {"Dashanana", "Dasaratha", "Vibhishana", "Ratnakara"}, 0};
ramayana_questions[36] = (Question){"How many heads did Ravana have?", {"5", "10", "12", "20"}, 1};
ramayana_questions[37] = (Question){"Who cursed Ravana that he would meet his end because of a woman?", {"Brahma", "Shiva", "Nandi", "Narada"}, 2};
ramayana_questions[38] = (Question){"Who shot the arrow that struck Ravana's navel, rendering him vulnerable?", {"Hanuman", "Lakshmana", "Rama", "Indra"}, 2};
ramayana_questions[39] = (Question){"What was the name of Ravana's brother who ruled Lanka before him?", {"Vibhishana", "Kubera", "Sugriva", "Bali"}, 1};
ramayana_questions[40] = (Question){"How many sons did Ravana have?", {"2", "3", "7", "5"}, 2};
ramayana_questions[41] = (Question){"Who helped Ravana in performing a sacrifice for victory?", {"Malyavan", "Kumbhakarna", "Vibhishana", "Indrajit"}, 3};
ramayana_questions[42] = (Question){"What was the name of character  who had the power to change his size?", {"Vibhishana", "Kumbhakarna", "Hanuman", "Ravana"}, 2};
ramayana_questions[43] = (Question){"What was the name of the kingdom of Sita's father?", {"Kishkindha", "Mithila", "Ayodhya", "Lanka"}, 1};
ramayana_questions[44] = (Question){"Who was crowned king of Lanka after Ravana's death?", {"Lakshmana", "Angada", "Vibhishana", "Hanuman"}, 2};
ramayana_questions[45] = (Question){"Which bird tried to stop Ravana from abducting Sita?", {"Sampati", "Garuda", "Jatayu", "Takshaka"}, 2};
ramayana_questions[46] = (Question){"Who was the king of the Rakshasas before Ravana?", {"Vibhishana", "Kubera", "Maricha", "Sumali"}, 1};
ramayana_questions[47] = (Question){"What was the name of the demon Ravana sent to distract Rama and Lakshmana during Sita's abduction?", {"Indrajit", "Maricha", "Sugriva", "Kumbhakarna"}, 1};
ramayana_questions[48] = (Question){"Which weapon did Rama use to kill Ravana?", {"Brahmastra", "Vajra", "Pinaka", "Pashupatastra"}, 0};
ramayana_questions[49] = (Question){"Who was the eldest son of Ravana?", {"Indrajit", "Atikaya", "Akshayakumara", "Meghanada"}, 0};
ramayana_questions[50] = (Question){"Who advised Ravana to return Sita to Lord Rama?", {"Kumbhakarna", "Indrajit", "Mandodari", "Vibhishana"}, 3};

    // Mahabharata Questions

mahabharata_questions[0] = (Question){"Who is the author of Mahabharata?", {"Vyasa", "Valmiki", "Tulsidas", "Kalidasa"}, 0};
mahabharata_questions[1] = (Question){"Who is the eldest of the Pandavas?", {"Arjuna", "Yudhishthira", "Bhima", "Nakula"}, 1};
mahabharata_questions[2] = (Question){"Who was the wife of all the Pandavas?", {"Satyavati", "Kunti", "Draupadi", "Gandhari"}, 2};
mahabharata_questions[3] = (Question){"Who was the teacher of both the Pandavas and Kauravas?", {"Kripacharya", "Drona", "Karna", "Bhishma"}, 1};
mahabharata_questions[4] = (Question){"Who is the father of Arjuna?", {"Indra", "Surya", "Vayu", "Yama"}, 0};
mahabharata_questions[5] = (Question){"Who is the charioteer of Arjuna in the battle of Kurukshetra?", {"Drona", "Krishna", "Bhishma", "Karna"}, 1};
mahabharata_questions[6] = (Question){"Who is the eldest of the Kauravas?", {"Dushasana", "Vikarna", "Karna", "Duryodhana"}, 3};
mahabharata_questions[7] = (Question){"Who gave the Knowledge that motivate Arjuna to do war?", {"Bhishma", "Drona", "Krishna", "Vidura"}, 2};
mahabharata_questions[8] = (Question){"How many Pandavas were there?", {"4", "5", "6", "7"}, 1};
mahabharata_questions[9] = (Question){"What was the name of Bhima's mace?", {"Sharanga", "Pinaka", "Vajra", "Gada"}, 3};
mahabharata_questions[10] = (Question){"Who was the main rival of Arjuna in archery?", {"Yudhishthira", "Bhishma", "Karna", "Duryodhana"}, 2};
mahabharata_questions[11] = (Question){"Who was known for his great strength among the Pandavas?", {"Nakula", "Yudhishthira", "Bhima", "Sahadeva"}, 2};
mahabharata_questions[12] = (Question){"What is the name of Arjuna's bow?", {"Gandiva", "Sharanga", "Pinaka", "Vajra"}, 0};
mahabharata_questions[13] = (Question){"Who was born with divine armor and earrings?", {"Duryodhana", "Karna", "Bhishma", "Drona"}, 1};
mahabharata_questions[14] = (Question){"Who was the mother of Pandavas?", {"Kunti", "Gandhari", "Draupadi", "Satyavati"}, 0};
mahabharata_questions[15] = (Question){"Which Pandava was known for his righteousness?", {"Arjuna", "Bhima", "Yudhishthira", "Nakula"}, 2};
mahabharata_questions[16] = (Question){"Who was Dronacharya's son?", {"Ashwatthama", "Kripa", "Karna", "Bhishma"}, 0};
mahabharata_questions[17] = (Question){"How many Kauravas were there?", {"100", "101", "99", "102"}, 0};
mahabharata_questions[18] = (Question){"Who is known as the grandfather of both the Pandavas and the Kauravas?", {"Bhishma", "Vidura", "Shakuni", "Kripacharya"}, 0};
mahabharata_questions[19] = (Question){"Who lost the game of dice?", {"Duryodhana", "Yudhishthira", "Karna", "Shakuni"}, 1};
mahabharata_questions[20] = (Question){"Who is the mother of Karna?", {"Kunti", "Gandhari", "Satyavati", "Madri"}, 0};
mahabharata_questions[21] = (Question){"Who killed Dronacharya in the war?", {"Bhima", "Arjuna", "Yudhishthira", "Dhrishtadyumna"}, 3};
mahabharata_questions[22] = (Question){"Who was the eldest son of Draupadi?", {"Prativindhya", "Shrutakarma", "Ghatotkacha", "Abhimanyu"}, 0};
mahabharata_questions[23] = (Question){"Who was Bhishma's mother?", {"Satyavati", "Ganga", "Amba", "Ambika"}, 1};
mahabharata_questions[24] = (Question){"Who vowed not to marry and to protect the throne of Hastinapura?", {"Bhishma", "Vidura", "Karna", "Drona"}, 0};
mahabharata_questions[25] = (Question){"Who was the commander-in-chief of the Kaurava army after Bhishma?", {"Karna", "Ashwatthama", "Drona", "Shakuni"}, 2};
mahabharata_questions[26] = (Question){"Who was the wife of Bhima?", {"Draupadi", "Satyabhama", "Subhadra", "Hidimba"}, 3};
mahabharata_questions[27] = (Question){"Who killed Karna?", {"Arjuna", "Bhima", "Yudhishthira", "Krishna"}, 0};
mahabharata_questions[28] = (Question){"Who was the divine son of Kunti, born before her marriage?", {"Drona", "Karna", "Vidura", "Bhishma"}, 1};
mahabharata_questions[29] = (Question){"What was the name of the kingdom ruled by Pandavas?", {"Kuru", "Indraprastha", "Hastinapura", "Panchala"}, 1};
mahabharata_questions[30] = (Question){"Which form did Krishna take to show Arjuna his divine power?", {"Narayan", "Virat", "Vishwarupa", "Narasimha"}, 2};
mahabharata_questions[31] = (Question){"Who broke the wheel of Karna's chariot during the war?", {"Krishna", "Arjuna", "Bhima", "Yudhishthira"}, 1};
mahabharata_questions[32] = (Question){"Who was the king of Gandhara and the maternal uncle of Duryodhana?", {"Vidura", "Kripa", "Shakuni", "Dhritarashtra"}, 2};
mahabharata_questions[33] = (Question){"Who killed Bhishma?", {"Arjuna", "Bhima", "Duryodhana", "Yudhishthira"}, 0};
mahabharata_questions[34] = (Question){"Who killed Abhimanyu in the Chakravyuha?", {"Dronacharya", "Karna", "Duryodhana", "Jayadratha"}, 1};
mahabharata_questions[35] = (Question){"Who was the only Kaurava to survive the Kurukshetra war?", {"Duryodhana", "Ashwatthama", "Karna", "Bhishma"}, 1};
mahabharata_questions[36] = (Question){"Who composed the Bhagavad Gita?", {"Vyasa", "Krishna", "Sanjaya", "Valmiki"}, 0};
mahabharata_questions[37] = (Question){"Who was the son of Arjuna and Subhadra?", {"Bhima", "Abhimanyu", "Ghatotkacha", "Shrutakarma"}, 1};
mahabharata_questions[38] = (Question){"Which warrior fought for the Kauravas despite being the eldest Pandava?", {"Bhishma", "Karna", "Yudhishthira", "Vidura"}, 1};
mahabharata_questions[39] = (Question){"Who gave the  curse to Ashwatthama after the war?", {"Bhishma", "Draupadi", "Krishna", "Yudhishthira"}, 2};
mahabharata_questions[40] = (Question){"What was the real name of Shakuni?", {"Saubala", "Jayadratha", "Satyaki", "Dhritarashtra"}, 0};
mahabharata_questions[41] = (Question){"Who killed Ghatotkacha?", {"Drona", "Duryodhana", "Ashwatthama", "Karna"}, 3};
mahabharata_questions[42] = (Question){"Who was born to Bhima and the demoness Hidimbi?", {"Ghatotkacha", "Abhimanyu", "Ashwatthama", "Vikarna"}, 0};
mahabharata_questions[43] = (Question){"Who did Draupadi reject during her swayamvara?", {"Karna", "Arjuna", "Bhima", "Yudhishthira"}, 0};
mahabharata_questions[44] = (Question){"Who was cursed to remain celibate for life?", {"Bhishma", "Vidura", "Karna", "Drona"}, 0};
mahabharata_questions[45] = (Question){"Which Pandava was skilled in horse-riding?", {"Nakula", "Sahadeva", "Arjuna", "Yudhishthira"}, 0};
mahabharata_questions[46] = (Question){"Who taught the Pandavas the art of sword fighting?", {"Drona", "Kripacharya", "Bhishma", "Shiva"}, 3};
mahabharata_questions[47] = (Question){"Which of these was Arjuna's wife?", {"Subhadra", "Kunti", "Satyabhama", "Rukmini"}, 0};
mahabharata_questions[48] = (Question){"Who led the Yadavas during the war?", {"Balarama", "Satyaki", "Krishna", "Uddhava"}, 1};
mahabharata_questions[49] = (Question){"What was the name of Duryodhana's mace?", {"Sharanga", "Vajra", "Gada", "Pasha"}, 2};
mahabharata_questions[50] = (Question){"Who killed Duryodhana in a mace duel?", {"Bhima", "Arjuna", "Yudhishthira", "Karna"}, 0};

          //GK question

gk_questions[0] = (Question){"What is the capital of France?", {"Berlin", "Madrid", "Paris", "Rome"}, 2};
gk_questions[1] = (Question){"Which planet is known as the Red Planet?", {"Earth", "Mars", "Jupiter", "Saturn"}, 1};
gk_questions[2] = (Question){"Who wrote the play 'Romeo and Juliet'?", {"Shakespeare", "Hemingway", "Tolkien", "Dickens"}, 0};
gk_questions[3] = (Question){"What is the tallest mountain in the world?", {"K2", "Kangchenjunga", "Mount Everest", "Lhotse"}, 2};
gk_questions[4] = (Question){"Which animal is known as the King of the Jungle?", {"Elephant", "Tiger", "Lion", "Cheetah"}, 2};
gk_questions[5] = (Question){"What is the chemical symbol for water?", {"H2O", "O2", "CO2", "NaCl"}, 0};
gk_questions[6] = (Question){"Which ocean is the largest?", {"Indian", "Pacific", "Atlantic", "Arctic"}, 1};
gk_questions[7] = (Question){"Which is the smallest continent?", {"Africa", "Europe", "Australia", "South America"}, 2};
gk_questions[8] = (Question){"What is the longest river in the world?", {"Nile", "Amazon", "Yangtze", "Mississippi"}, 0};
gk_questions[9] = (Question){"How many continents are there?", {"5", "6", "7", "8"}, 2};
gk_questions[10] = (Question){"Who was the first man to walk on the moon?", {"Neil Armstrong", "Buzz Aldrin", "Yuri Gagarin", "Michael Collins"}, 0};
gk_questions[11] = (Question){"Which country is known as the Land of the Rising Sun?", {"China", "Japan", "South Korea", "Thailand"}, 1};
gk_questions[12] = (Question){"Which is the largest mammal?", {"Elephant", "Blue Whale", "Giraffe", "Hippopotamus"}, 1};
gk_questions[13] = (Question){"How many sides does a pentagon have?", {"3", "4", "5", "6"}, 2};
gk_questions[14] = (Question){"Which element is needed for breathing?", {"Hydrogen", "Oxygen", "Carbon", "Nitrogen"}, 1};
gk_questions[15] = (Question){"Who discovered gravity?", {"Einstein", "Newton", "Galileo", "Darwin"}, 1};
gk_questions[16] = (Question){"What is the hardest natural substance on Earth?", {"Iron", "Gold", "Diamond", "Platinum"}, 2};
gk_questions[17] = (Question){"Which country is famous for the Great Wall?", {"India", "China", "Japan", "Russia"}, 1};
gk_questions[18] = (Question){"How many players are there in a soccer team?", {"9", "10", "11", "12"}, 2};
gk_questions[19] = (Question){"What is the currency of Japan?", {"Dollar", "Euro", "Rupee", "Yen"}, 3};
gk_questions[20] = (Question){"Who painted the Mona Lisa?", {"Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Claude Monet"}, 2};
gk_questions[21] = (Question){"Which country gifted the Statue of Liberty to the USA?", {"Germany", "France", "Italy", "Spain"}, 1};
gk_questions[22] = (Question){"What is the capital of Canada?", {"Toronto", "Vancouver", "Ottawa", "Montreal"}, 2};
gk_questions[23] = (Question){"Which organ is primarily responsible for pumping blood?", {"Liver", "Lungs", "Heart", "Kidneys"}, 2};
gk_questions[24] = (Question){"What is the largest desert in the world?", {"Sahara", "Gobi", "Kalahari", "Arabian"}, 0};
gk_questions[25] = (Question){"In which year did the Titanic sink?", {"1910", "1912", "1914", "1916"}, 1};
gk_questions[26] = (Question){"Who invented the telephone?", {"Thomas Edison", "Nikola Tesla", "Alexander Graham Bell", "Marie Curie"}, 2};
gk_questions[27] = (Question){"Which is the smallest planet in our solar system?", {"Mercury", "Mars", "Venus", "Pluto"}, 0};
gk_questions[28] = (Question){"Which country hosted the first modern Olympic Games?", {"France", "Greece", "Italy", "USA"}, 1};
gk_questions[29] = (Question){"Which metal is a liquid at room temperature?", {"Gold", "Iron", "Mercury", "Copper"}, 2};
gk_questions[30] = (Question){"Which language has the most native speakers?", {"English", "Mandarin", "Spanish", "Hindi"}, 1};
gk_questions[31] = (Question){"Which vitamin is produced when the body is exposed to sunlight?", {"Vitamin A", "Vitamin B", "Vitamin C", "Vitamin D"}, 3};
gk_questions[32] = (Question){"Who was the first President of the United States?", {"George Washington", "Abraham Lincoln", "John Adams", "Thomas Jefferson"}, 0};
gk_questions[33] = (Question){"Which is the longest bone in the human body?", {"Femur", "Humerus", "Radius", "Tibia"}, 0};
gk_questions[34] = (Question){"Which is the second-most spoken language in the world?", {"Spanish", "English", "Hindi", "French"}, 1};
gk_questions[35] = (Question){"Which is the largest island in the world?", {"Greenland", "Australia", "Iceland", "Madagascar"}, 0};
gk_questions[36] = (Question){"Who developed the theory of relativity?", {"Isaac Newton", "Albert Einstein", "Galileo Galilei", "Nikola Tesla"}, 1};
gk_questions[37] = (Question){"What is the speed of light?", {"299,792 km/s", "150,000 km/s", "300,000 km/s", "199,792 km/s"}, 0};
gk_questions[38] = (Question){"Which element has the atomic number 1?", {"Helium", "Oxygen", "Nitrogen", "Hydrogen"}, 3};
gk_questions[39] = (Question){"Who is the current Secretary-General of the United Nations (as of 2023)?", {"Ban Ki-moon", "Kofi Annan", "António Guterres", "Boutros Boutros-Ghali"}, 2};
gk_questions[40] = (Question){"Which country has the highest population?", {"USA", "India", "China", "Russia"}, 2};
gk_questions[41] = (Question){"Who discovered penicillin?", {"Marie Curie", "Alexander Fleming", "Louis Pasteur", "Joseph Lister"}, 1};
gk_questions[42] = (Question){"Which is the longest running film franchise?", {"James Bond", "Star Wars", "Harry Potter", "Marvel Cinematic Universe"}, 0};
gk_questions[43] = (Question){"What is the capital of South Africa?", {"Pretoria", "Cape Town", "Bloemfontein", "All of the above"}, 3};
gk_questions[44] = (Question){"Which planet has the most moons?", {"Jupiter", "Saturn", "Uranus", "Neptune"}, 1};
gk_questions[45] = (Question){"Which ancient civilization built the Pyramids?", {"Mesopotamians", "Romans", "Greeks", "Egyptians"}, 3};
gk_questions[46] = (Question){"Which is the most abundant gas in Earth's atmosphere?", {"Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen"}, 2};
gk_questions[47] = (Question){"Which country is home to the Kangaroo?", {"South Africa", "New Zealand", "Australia", "Brazil"}, 2};
gk_questions[48] = (Question){"Who wrote 'The Odyssey'?", {"Homer", "Plato", "Virgil", "Aristotle"}, 0};
gk_questions[49] = (Question){"Which country won the FIFA World Cup in 2018?", {"Brazil", "Germany", "Argentina", "France"}, 3};
gk_questions[50] = (Question){"What is the hottest planet in our solar system?", {"Mercury", "Venus", "Mars", "Jupiter"}, 1};
    
}

void displayInstructions() {
    printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n ",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
printf("                                  WELCOME TO THE QUIZ ( INTELLECT QUEST )                                 \n");
printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c\n",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
char name[100];
printf("Enter you full name in caps: ");
scanf("%[^\n]s",name);
printf("\nWelcome %s !! Let's check your talent\n");
    printf("\nYou can choose from the following topics:\n");
    printf("1. Ramayana\n");
    printf("2. Mahabharata\n");
    printf("3. General Knowledge\n");
    printf("Select a difficulty level:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
}
void selectTopicAndDifficulty(int *topic, int *difficulty) {
    printf("Enter the topic number (1-3): ");
    scanf("%d", topic);
    
    printf("Select difficulty level (1-3):");
    scanf("%d", difficulty);
}
void askQuestions(Question *questions, int totalQuestions) {
    int score = 0;

    for (int i = 0; i < 10; i++) { // Ask 10 questions
        int index = rand() % totalQuestions; // Randomly select a question
        
        // Debug statement to check the selected index
        

        // Display the question
        printf("\nQuestion %d: %s\n", i + 1, questions[index].question);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, questions[index].options[j]);
        }
        
        // Start the timer
        printf("You have 30 seconds to answer this question!\n");
        time_t start_time = time(NULL); // Start time

        // Input answer
        int answer;
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        time_t end_time = time(NULL); // End time
        if (difftime(end_time, start_time) > 30) {
            printf("Time's up! Moving to the next question.\n");
            continue; // Skip to the next question if time exceeds 30 seconds
        }

        // Check if the answer is correct
        if (answer - 1 == questions[index].answer) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer was: %s\n", questions[index].options[questions[index].answer]);
        }
    }

    // Print final score
    printf("\nYour final score is: %d out of 10\n", score);

    if(score>=0&&score<4){
        printf("You can do better!!\n");
    }
    else if(score>=4&&score<8){
        printf("You performed well !!\n");
    } else if(score>=8&&score<=10){
        printf("Excellent performance !!\n");
    }
    else{
        printf("Come again !!\n");
    }

    printf("\nHope to see you again till then thankyou!!\n");
}


int main() {
    srand(time(NULL)); // Seed random number generator

    // Initialize questions
    initialize_questions();

    // Display instructions
    displayInstructions();

    // Variables for topic and difficulty
    int topic, difficulty;
    selectTopicAndDifficulty(&topic, &difficulty);

    // Ask questions based on selected topic
    switch (topic) {
        case 1:
            askQuestions(ramayana_questions, 50); // Pass Ramayana questions
            break;
        case 2:
            askQuestions(mahabharata_questions, 50); // Pass Mahabharata questions
            break;
        case 3:
            askQuestions(gk_questions, 50); // Pass General Knowledge questions 
            break;
        default:
            printf("Invalid topic selected!\n");
            break;
    }

    return 0;
}
