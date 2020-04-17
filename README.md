# See
See plus plus, the c++ game.

# About the game development
This game was created to the intent of delivering a college project, and was build in a way it serves as a tutorial for beginners in game development with SFML library such as I am.

You can download SFML at: https://www.sfml-dev.org/download.php.

Additionally to the Visual Studio project configuration tutorial, add the "sfml-xxx-d-2.dll" files (located in the bin folder inside the SFML folder you downloaded) to the Debug folder while debugging.


As a Git branching model, I used a 4 environments GitFlow plus "feature", "bugfix" (develop branch fixes) and "hotfix" (master branch fixes) branch grouping folders.


  Branch    | Description
------------|-------------
**develop** | In this environment, developers directly add new features and bugfixes.
**test**    | New features that have passed the developers unit tests will be here, and will go through an intensive testing phase               to confirm the new functionality works as expected in the system.
**staging** | Version of the code that passed the tests and is open to a niche audience. Can also be called a "Early-access" to                   newer features.
**master**  | Production environment, which means it passed through all tests and was validated by the client/user.
feature     | Groups all temporary branches that developers create to develop a new feature.
bugfix      | Groups all temporary branches that developers create to fix a bug found in any of the three validation environments.
hotfix      | Groups all temporary branches that developers create to fix a bug found in production and should be fixed                       urgently. Once the bug was fixed, the hotfix branch is merged from top to bottom (master > stagin > test >                       develop).

Find more about Git and branches in this fine [GitFlow Workflow guideline](https://www.atlassian.com/git/tutorials/comparing-workflows/gitflow-workflow).
