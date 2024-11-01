/*******************************************************************************************
*
*  Pokemon Battle simulator
*
*   
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

enum GameState{SelectionState=0,Fightstate,EnemyState,InventoryState,WinningState};
enum Selection{fight=0,pokemon,bag,run=3};


int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const pixelMultiplier=2;
    const int screenWidth = 240;
    const int screenHeight = 160;
    
    const int playerhealthmax=100;
    const int enemyhealthmax=90;
    
    InitWindow(screenWidth, screenHeight, "pokemon");
    InitAudioDevice();        
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop

    Texture2D Background = LoadTexture("resources/Pokemon/background.png");
    Texture2D BackgroundBox = LoadTexture("resources/Pokemon/Background_Box.png");
    Texture2D OptionsBox = LoadTexture("resources/Pokemon/Options_Box.png");
    Texture2D ivy = LoadTexture("resources/Pokemon/ivy.png");
    Texture2D Charmander = LoadTexture("resources/Pokemon/Charmander_player.png");
    Texture2D cater = LoadTexture("resources/Pokemon/Cater.png");
    Texture2D PlayerBox=LoadTexture("resources/Pokemon/Player_Box.png");
    Texture2D EnemyBox=LoadTexture("resources/Pokemon/Enemy_Box.png");
    Texture2D SelectArrow=LoadTexture("resources/Pokemon/Options_arrow.png");
    Music music = LoadMusicStream("resources/Pokemon/Battle.mp3");
    bool isCaterpillar= false;
    PlayMusicStream(music);
    
    int currentplayerhealth=50;
    int currentenemyhealth=50;
    enum GameState gamestate=SelectionState; 
    enum Selection arrowSelection=fight;
    bool shouldclosewindow=WindowShouldClose();
   // ToggleFullscreen();
    while (!shouldclosewindow)    // Detect window close button or ESC key
    {
        UpdateMusicStream(music);
        shouldclosewindow=WindowShouldClose();
       
        if (IsKeyPressed(KEY_UP))
        {
           if(arrowSelection!=0) arrowSelection--;
        }
        if (IsKeyPressed(KEY_DOWN))
        {
            if(arrowSelection!= 3)arrowSelection++;       
        }
        if(IsKeyPressed(KEY_ENTER))
        {
             switch(arrowSelection)
            {
                case fight:
                currentenemyhealth-=10;
                 currentplayerhealth-=5;
                 if( currentenemyhealth<0) currentenemyhealth=0;
                  if( currentplayerhealth<0) currentplayerhealth=0;
                  if(currentenemyhealth==0)
                  {
                      StopMusicStream(music);
                      gamestate=WinningState;
                  }
                break;
                case pokemon:
                isCaterpillar=!isCaterpillar;
                break;
                  case bag:
                  currentplayerhealth+=10; 
                  if(currentplayerhealth>100){
                      currentplayerhealth=100;
                  }
                       currentplayerhealth-=5;
                   if( currentplayerhealth<0) currentplayerhealth=0;
                break;
                  case run:
                shouldclosewindow=true;
                break;
            }
        }
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);
            switch(gamestate)
            {
                case SelectionState:
            DrawTexture(Background,0,0,WHITE);
            DrawTexture(BackgroundBox,0,screenHeight-BackgroundBox.height,WHITE);
            DrawTexture(OptionsBox,screenWidth/2,screenHeight-OptionsBox.height,WHITE);
            DrawTexture(PlayerBox,screenWidth/2,(screenHeight-OptionsBox.height)-39,WHITE);
            DrawTexture(EnemyBox,20,15,WHITE); 
            DrawText("Ivy",70, 20, 0.1f, BLACK);
            DrawText(TextFormat("%02i / %02i", currentenemyhealth,enemyhealthmax), 25,20, 0.1f, BLACK);
            DrawTexture(ivy,screenWidth-80,screenHeight/8,WHITE);
            if(isCaterpillar)
            {
            DrawTexture(cater,30,BackgroundBox.height*1.6,WHITE); 
            DrawText("caterpillar",145, 77, 0.1f, BLACK);
            DrawText("CATERPILLAR do ?",19, 136, 0.1f, WHITE);
            }else
            {
            DrawTexture(Charmander,30,BackgroundBox.height*1.4,WHITE); 
            DrawText("charizard",145, 77, 0.1f, BLACK);
            DrawText("CHARIZARD do ?",19, 136, 0.1f, WHITE);
            }
           
            DrawText(TextFormat("%02i / %02i", currentplayerhealth,playerhealthmax), 145,94, 0.1f, BLACK);
            DrawText("What should",19, 126, 0.1f, WHITE);
          
            
            switch(arrowSelection)
            {
                case fight:
                 DrawTexture(SelectArrow,(screenWidth/2)+10,(screenHeight)-(OptionsBox.height-10),WHITE);
                break;
                case pokemon:
                 DrawTexture(SelectArrow,(screenWidth/2)+10,(screenHeight)-(OptionsBox.height-27),WHITE);
                break;
                  case bag:
                     DrawTexture(SelectArrow,(screenWidth/2)+66,(screenHeight)-(OptionsBox.height-8),WHITE);
                break;
                  case run:
                   DrawTexture(SelectArrow,(screenWidth/2)+66,(screenHeight)-(OptionsBox.height-27),WHITE);
                break;
            }
           
                break;
                case WinningState:
                  ClearBackground(GRAY);
                 DrawText("YOU WIN", screenWidth/2,screenHeight/2, 0.1f, WHITE);
                break;
            }
          
           

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

   UnloadMusicStream(music);   // Unload music stream buffers from RAM

    CloseAudioDevice();  
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}