[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10951875&assignment_repo_type=AssignmentRepo)
# Movie Recommender
 > Authors: [William Choi](https://github.com/williamjaec), [Ramya Madugula](https://github.com/ramyaxmad), [Bryan Pham](https://github.com/Bryanpham004), [Abhinav Sharma](https://github.com/abhnv-shrma)

## Project Description
> People have different tastes in movies, whether it be action, horror, rom-com, etc. Our movie recommender allows the users to find interesting movies based on movies they already enjoy through a reliable algorithm that sources real-world data. This is better than receiving recommendations from friends or family because those around you do not have a full understanding of every movie in the world and all of their respective information/data (Rotten Tomatoes ratings, Audience ratings, cast members, genres, etc.). However, our recommender will use all of these pieces of information in order to generate a list of movies that will have logical and evidence-based suggestions.
> 
> The programming language we intend to use is C++, as the rubric recommends. We will use information provided by various professional sources, such as Rotten Tomatoes. IMDb, and Netflix for example.
> 
> Our primary source of input will be through user input through the terminal. Within the terminal, the user will be prompted with various questions about their movie preferences, such as a preferred director, favorite cast member, genre, and even language. These inputs will be run through our back-end algorithm and will end up outputting a list of 20 or more movie recommendations, depending on if there exists a long enough list based on the given parameters. The list will primarily be sorted on its “compatibility score” with the user. We may include different sorting options, such as sorting the recommendations based on the release dates of the films.
>
### Navigation Diagram
> ![Screenshot 2023-05-11 203601](https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/129914516/f9e59ca4-617d-4630-8dcb-a34843c919ca)
> 
> The terminal will first show a login screen where they will have to enter a username and password. Then, the user will go through various screens that prompt them with questions about their movie preferences. They will have the opportunity to answer or to just leave it blank. They will also have an option to go back to the previous question if they want to change it. Any invalid answers will notify the user that their input wasn't accepted, and it will reprompt for an answer. The final screen will print out a movie list based on the answers of the user. The user can re-sort the list by entering a number. Once the user is done, give them the option to restart or logout of the program.


### Screen Layouts
 > <img width="503" alt="Screenshot 2023-05-11 at 8 57 26 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/56cbd3bf-b581-440b-a369-2049b879b549">
 > 
 > Our screen layout contains three different layouts: the login screen, a questionnaire screen, and our movie recommendations screen. The login screen will allow the user to input their specific username and password in order to get access to the program. The questionnaire screen will pop up a question about the user’s preferred movie genre, cast member, director, or language. The user can then input a valid answer below, leave the option blank, or type in “-” to go to the previous question. After all of the questions, the final screen will contain the list of all of the movies that fit the user’s preferences. It will allow the user to sort the movies based on various criteria, such as the date or rating, while also giving the user the option to logout or restart the program. 


## Class Diagram
 > <img width="527" alt="Screenshot 2023-06-09 at 3 07 30 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/18760f60-1bef-4157-9490-0bad8d0cbb82">
 > 
 > 
 > MovieRecommender 
 > contains with the UI including the login input, user input that answers each question (userGenre, userCastMember, userDirector, userLanguange), and user inputs that can restart the program, go back to the previous screen, and logout. 
 > RecMovies
 > will take in movie preference data and create a list of Movie objects.
 > Movie
 > a single Movie object is created and 

 > ## Phase III
 > 
 > SOLID principles:
 > - Single responsibility principle: We created a separate “Sort” class apart from the “DBFilter “class since the “DBFilter” class creates
 > the original list of movies and a “Sort” class would manipulate the list of movies.
 > - These changes satisfy the single responsibility principle because rather than having sort functions within the “DBFilter” class, each
 > class can now be responsible for one thing. This makes each component simpler and easier to implement. In addition, we separated our
 > “recMovies” class into a “DBFilter” and “DBManager class.” Instead of combining these two classes into one “recMovies” class, we decided
 > to split them up for the same reason as before. If they weren’t separated, we would have one overly-complicated and potentially bug
 > filled class, rather than two cleaner components. 




 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 > <img width="681" alt="Screenshot 2023-06-09 at 3 53 44 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/ae65d12a-95c2-4d3d-a501-4d35ebab8eaa">
 > <img width="939" alt="Screenshot 2023-06-09 at 3 54 06 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/68ee2803-ee19-4bb6-9631-ec7d625923ab">
 > <img width="866" alt="Screenshot 2023-06-09 at 3 54 21 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/b3ec1290-eab2-4664-bd2b-2553ab268d90">
 > <img width="502" alt="Screenshot 2023-06-09 at 3 54 41 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/453fc532-b0ed-4262-a771-7817545a3a9f">
 > <img width="717" alt="Screenshot 2023-06-09 at 3 55 57 PM" src="https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/114566035/c718c743-c1ac-445b-acf3-a4bc62ffa316">
 > 
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > We tested/validated our project in a couple ways. Firstly, we manually tested all of our functions, simulating what it would be like as a user. In addition, we used Google Test during our development phase, such as testing to make sure that our data was being parsed correctly and being stored properly in the vector. We did not end up using CI because of the limited number of work hours, and we did not end up using Valgrind because we were dealing with only a couple pointer in our entire program
 
