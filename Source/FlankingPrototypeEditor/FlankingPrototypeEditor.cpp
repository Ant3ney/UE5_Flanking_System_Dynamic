#include "FlankingPrototypeEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

IMPLEMENT_GAME_MODULE(FFlankingPrototypeEditor, FlankingPrototypeEditor);


void FFlankingPrototypeEditor::StartupModule()
{
    
    UE_LOG(LogTemp, Warning, TEXT("Running Editor GUI"));

    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditorMenuExtensibilityManager = LevelEditorModule.GetMenuExtensibilityManager();
	MenuExtender = MakeShareable(new FExtender);
	MenuExtender->AddMenuBarExtension("Window", EExtensionHook::After, NULL, FMenuBarExtensionDelegate::CreateRaw(this, &FFlankingPrototypeEditor::MakePulldownMenu));
	LevelEditorMenuExtensibilityManager->AddExtender(MenuExtender);

    //Get the main menu bar
    //FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    //TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());

/*
    //Add a new menu item
    MenuExtender->AddMenuExtension(
        "WindowLayout",
        EExtensionHook::After,
        nullptr,
        FMenuExtensionDelegate::CreateLambda([](FMenuBuilder& MenuBuilder) {
            MenuBuilder.AddMenuEntry(
                FText::FromString("My Custom Menu Item ----------------"),
                FText::FromString("This is a custom menu item"),
                FSlateIcon(),
                FUIAction(FExecuteAction::CreateLambda([] {
                    // Action to perform when the menu item is clicked
                    // For example, you can log a message
                    UE_LOG(LogTemp, Log, TEXT("Custom menu item clicked"));
                    }))
            );
            })
    );

    // Add the extender to the editor's menu bar
    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
*/
    //FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked("LevelEditor");
    //TSharedPtr MenuExtender = MakeShareable(new FExtender());
    //MenuExtender->AddMenuExtension("Window", EExtensionHook::After, nullptr, FMenuExtensionDelegate::CreateRaw(this, &FFlankingPrototypeEditor::MyCustomFunction));
    //LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
}

void FFlankingPrototypeEditor::ShutdownModule()
{

}

void FFlankingPrototypeEditor::MyCustomFunction(){
    UE_LOG(LogTemp, Warning, TEXT("Running Editor GUI in callback"));
    // Get the current working directory
    FString CurrentDirectory = FPlatformProcess::GetCurrentWorkingDirectory();

    // Construct the full file path
    FString FilePath = FPaths::Combine(CurrentDirectory, TEXT("hello.txt"));

    // Content to be written to the file
    FString FileContent = TEXT("Hello, Unreal Engine 5!");

    // Write the string to the file
    FFileHelper::SaveStringToFile(FileContent, *FilePath);
}

void FFlankingPrototypeEditor::MakePulldownMenu(FMenuBarBuilder &menuBuilder)
{
    menuBuilder.AddMenuEntry(
       FText::FromString("Example 2"),
       FText::FromString("Open the Example menu"),
       FSlateIcon(),
       FUIAction(FExecuteAction::CreateLambda([] {
           // Action to perform when the menu item is clicked
           // For example, you can log a message
           UE_LOG(LogTemp, Log, TEXT("Example menu item clicked 2"));

           //FFlankingPrototypeEditor::MyCustomFunction();
           
           FString FilePath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Source/FlankingPrototype/Private/hello.txt"));
           FilePath = FPaths::ConvertRelativePathToFull(FilePath); // Get absolute path

           if (!FPaths::FileExists(FilePath))
           {
               FString FileContent = TEXT("Hello, World!");
               if (FFileHelper::SaveStringToFile(FileContent, *FilePath))
               {
                   UE_LOG(LogTemp, Log, TEXT("File created successfully at: %s"), *FilePath);
                   // Trigger Hot Reload
                   FName ModuleName = FName(TEXT("MyModuleName"));

                    // Get the HotReload interface
                    //FHotReloadModule& HotReloadModule = FModuleManager::LoadModuleChecked<FHotReloadModule>("HotReload");
               }
               else
               {
                   UE_LOG(LogTemp, Error, TEXT("Failed to create file at: %s"), *FilePath);
               }
           }
           else
           {
               UE_LOG(LogTemp, Warning, TEXT("File already exists at: %s"), *FilePath);
           }
       }))
   );
	//menuBuilder.AddPullDownMenu(
	//	FText::FromString("Example"),
	//	FText::FromString("Open the Example menu"),
	//	FNewMenuDelegate::CreateRaw(this, &FFlankingPrototypeEditor::FillPulldownMenu),
	//	"Example",
	//	FName(TEXT("ExampleMenu"))
	//);
}

void FFlankingPrototypeEditor::FillPulldownMenu(FMenuBuilder &menuBuilder)
{
	menuBuilder.BeginSection("ExampleSection", FText::FromString("Section 1"));
	menuBuilder.AddMenuSeparator(FName("Section_1"));
	menuBuilder.EndSection();

	menuBuilder.BeginSection("ExampleSection", FText::FromString("Section 2"));
	menuBuilder.AddMenuSeparator(FName("Section_2"));
	menuBuilder.EndSection();
}
