void setfeaturedefaults() {
    Features::Match.InputText_ChatSpamMessage = "Polywar Mod Menu by HorridModz";
    Features::Bots.AddBots_InputText_Name = "HorridModz's Bot";
    Features::ManipulateAllPlayers.InputText_ChangePlayerNames = "HorridModz's Servant";
    Features::ManipulatePlayer.InputText_ChangePlayerName = "HorridModz's Servant";
}


int setfeaturedefaultsworkaround() {
    // For some reason, I get an error if I try to call setfeaturedefaults() by itself.
    // However, if I make a middle-man function that calls setfeaturedefaults) and returns a value,
    // then store and immediately dispose of this value, it works.
    setfeaturedefaults();
    return 0;
}