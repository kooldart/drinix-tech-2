#ifndef Planet_h
#define Planet_h
namespace dx {
	class Planet
	{
	private:
		char* Name;
		std::vector<std::unique_ptr<Actor>> AllActors;
	public:
		void (*Load)();
		Planet(char* newName);
		void Init();
		void Tick();
		void UnLoad();
		Actor CreateActor(Actor* Prefab, char* NewName = "unset", char* NewTag = "Default");
		Actor* CreateNewActor(Actor* Prefab, char* NewName = "unset", char* NewTag = "Default");
		void CreateActor(char* NewName = "unset", char* NewTag = "Default");
		void PrintAll();
		int NumOfActors();
		void KillAll();
		~Planet();
	};
}
#endif