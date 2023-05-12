[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10951875&assignment_repo_type=AssignmentRepo)
# Movie Recommender
 > Authors: [William Choi](https://github.com/williamjaec), [Ramya Madugula](https://github.com/ramyaxmad), [Bryan Pham](https://github.com/Bryanpham004), [Abhinav Sharma](https://github.com/abhnv-shrma)

## Project Description
> People have different tastes in movies, whether it be action, horror, rom-com, etc. Our movie recommender allows the users to find interesting movies based on movies they already enjoy through a reliable algorithm that sources real-world data. This is better than receiving recommendations from friends or family because those around you do not have a full understanding of every movie in the world and all of their respective information/data (Rotten Tomatoes ratings, Audience ratings, cast members, genres, etc.). However, our recommender will use all of these pieces of information in order to generate a list of movies that will have logical and evidence-based suggestions.
> The programming language we intend to use is C++, as the rubric recommends. We will use information provided by various professional sources, such as Rotten Tomatoes. IMDb, and Netflix for example.
> Our primary source of input will be through user input through the terminal. Within the terminal, the user will be prompted with various questions about their movie preferences, such as a preferred director, favorite cast member, genre, and even language. These inputs will be run through our back-end algorithm and will end up outputting a list of 20 or more movie recommendations, depending on if there exists a long enough list based on the given parameters. The list will primarily be sorted on its “compatibility score” with the user. We may include different sorting options, such as sorting the recommendations based on the release dates of the films.
>
### Navigation Diagram
> ![Screenshot 2023-05-11 203601](https://github.com/cs100/final-project-rmadu002-ashar165-wchoi053-bpham082/assets/129914516/f9e59ca4-617d-4630-8dcb-a34843c919ca)
> 
> The user will go through various screens that prompt them with questions about their movie preferences. They will have the opportunity to answer or to just leave it blank. Any invalid answers will notify the user that their input wasn't accepted, and it reprompt for an answer. Print out a movie list based on the answers of the user. Once in that screen, the user can sort the list. Once the user is done, give them the option to quit or to restart the program.


### Screen Layouts
 > ![Untitled Workspace](https://user-images.githubusercontent.com/114566035/236732276-d9833ab8-4a9c-42f8-86d4-c292756072fc.png)

## Class Diagram
 > <img width="514" alt="Screenshot 2023-05-07 at 9 29 49 PM" src="https://user-images.githubusercontent.com/114566035/236734210-d89daa6d-9495-43aa-bba3-f6cc22718c3f.png">
 > 
 > For now, we only have a MovieRecommender class with 4 private variables for the 4 user inputs, a constructor, and a search function. Our search function is designed to cut down from the list of all movies based on the parameters of the MovieRecommender constructor. 

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
