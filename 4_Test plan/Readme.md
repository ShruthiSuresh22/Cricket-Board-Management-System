# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| H_01|Display of Menu| None | Menu<br>1.Add New Player<br>2.Update Runs<br>3.Modify Player's Record<br>4.Search by Player's ID<br>5.All Players<br>6.Delete Player's Record<br>7.Main Menu<br>8.EXIT<br>| PASS | Scenario|
| H_02|Add new player in the board |1.Player's Id <br> 2.Player's Name <br> 3.Player's average <br> 4.Player's run | Details from the user is stored to the score board |PASS|Requirement based |
| H_03|Update the player's run|Player's ID for run to be update | Player's run is updated and store to the score board |SUCCESS|Requirement based |
| H_04|To modify the player's record |Player's ID to be modify | Displays the modified player's data |SUCCESS| Requirement based |
| H_05|To search the player's record |Player's ID to be search | Displays the wanted player's data |SUCCESS| Requirement based |
| H_06|To view all the player's record |Integer '5' from the user| Displays the recored of all the player's|SUCCESS| Requirement based |
| H_07|Deleting the player's record|Player's ID to be Delete|Player's data deleted susccessfully|SUCCESS|Requirement based|
| H_08|To view the main menu|Integer '7' from the user| Displays the modified player's data |SUCCESS| Scenario|
|H_09| Check if the EXIT option works well| Integer '8' from the user|Exit out of the program|SUCCESS|Scenario|



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_04|select the player ID to modify the player's data |Player's Id to be modify| Displays the modified player's data| SUCCESS |Requirement based |
|  L_02|H_04|To select the correct option for the corresponding modification such as the name, average and run | 1.Name to be modify <br> 2.Average to be modify <br> 3.Run to be modify<br>4.EXIT<br> |Displays Record is Modified Successfully|SUCCESS|Requirement based|

