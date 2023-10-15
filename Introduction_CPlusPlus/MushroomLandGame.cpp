#include <iostream>

using namespace std;

int main()
{
    string decision1, decision2, decision3;
    cout << "WELCOME TO THE MAGICAL MUSHROOM LAND!\n\nYou find yourself at the end of a misty cliff. You see a bouncy looking mushroom below with a colourful glow reflecting off it. Right infront of you is a mighty stiff mushroom that grows past the fog above. Would you like to climb 'up' or jump 'down'? ";
    getline(cin, decision1);
    if (decision1 == "up")
    {
        cout << "\n\nYou climb for hours until the mist clears and you see a beautiful horizon. There are millions of pretty mushrooms of all colour and sizes. In the center of it all there is a large caste. You also notice the mushroom keeps climbing and it seems like there is something at the top. Would you like to go 'in' the castle or keep climbing 'up'? ";
        getline(cin, decision2);
        if (decision2 == "up")
        {
            cout << "\n\nYou have been climbing for a while. The shadow uptop is getting larger. You also notice a bouncy looking mushroom in the center of the castle that was hidden behind the walls. Would you like to keep climbing 'up' or jump 'down' onto the mushroom? ";
            getline(cin, decision3);
            if (decision3 == "up")
            {
                cout << "\n\nYou finally reach the top of the mushroom head. You climb up onto it and there you take in the breathtaking view. You can see every corner of the land. It is astonishing. Suddenly a gust of wind knocks you over the edge and you fall to you death. On the way down you think to youself: 'At least I got to see that marvelous view.";
            }
            else if (decision3 == "down")
            {
                cout << "\n\nYou fall down and glide through the air magestically. As you get closer to the castle you notice there are skulls and bones accumulated near the back of the castle's moat. You land on the mushroom and it flings you safely into a room in the castle. You look around and notice you are in the treasure room. It is filled with wealth beyond your imagination. You will live happily ever after.";
            }
            else
            {
                cout << "\n\nYou got lost. Please start over and try again.";
            }
        }
        else if (decision2 == "in")
        {
            cout << "\n\nYou cross the moat and reach the front door. You start to get an erie feeling. You ponder for a moment whether you should knock or try to sneak in from a side entrance. Would you to knock and go 'forward' or sneak and go 'around'? ";
            getline(cin, decision3);
            if (decision3 == "forward")
            {
                cout << "\n\nYou knock with an upbeat tune, excited to see what lies ahead. Suddenly a concealed slit is slid open. An arrow fires and knocks you into the moat below. It was a booby trap. The moat is filled with acid and you soon perish.";
            }
            else if (decision3 == "around")
            {
                cout << "\n\nYou sneak in through a side entrance. As soon as you make your way past the wall, you step on a pressure plate and fall to your doom. It was a booby trap. You fall into acid and soon perish.";
            }
            else
            {
                cout << "\n\nYou got lost. Please start over and try again.";
            }
        }
        else
        {
            cout << "\n\nYou got lost. Please start over and try again.";
        }
    }
    else if (decision1 == "down")
    {
        cout << "\n\nYou jump down and successfully land on the mushroom. It flings you backwards and you land in a cave, just under where you were standing. You look around and notice crystals of various colours glowing. That must be what was reflecting off the mushroom. The cave continues deeper with more crystals to follow. You notice another mushroom even further down the cliff. Would you like to follow the crystals 'into' the cave or jump 'down' onto the mushroom even further down the cliff? ";
        getline(cin, decision2);
        if (decision2 == "down")
        {
            cout << "\n\nYou fall for a long time and again get bounced backwards after landing on the mushroom. Yet again you are in a cave but notice no crystals but a faint red glow coming from down the path into the cave. You also notice the ground is visible down below. There is pretty greenery, flowers and mushrooms everywhere. Would you like to climb 'down' into the greenry or follow the path 'into' the cave towards the red glow? ";
            getline(cin, decision3);
            if (decision3 == "down")
            {
                cout << "\n\nYou climb down and the garden of plants truly are beatiful. Shortly after you start coughing and your eyes start to water. Soon you are choking. The plants seem to be breathing out poisonous air. You soon cannot breath and you perish.";
            }
            else if (decision3 == "into")
            {
                cout << "\n\nYou follow the path and see precious metals being smelled and polished in a flowing river of lava. You wonder where all of this precious metal is going. You follow the path of lava, curious to see where it leads and collects. You think to yourself once cooled these could be collected and sold for a tremendous amount of money. Suddenly the rock beneath your feet crumbles and you fall into the lava. You perish.";
            }
            else
            {
                cout << "\n\nYou got lost. Please start over and try again.";
            }
        }
        else if (decision2 == "into")
        {
            cout << "\n\nYou follow the crystals and they seem to be getting brighter and more plentiful the deeper you go. You can tell they lead somewhere massive. As you are getting closer to an overwhelming glow, you hear whooshing to the side away from the glow. You take a brief look but it is too dark to see. Would you like to follow the glow 'forward' or investigate the whoosing to the 'side'? ";
            getline(cin, decision3);
            if (decision3 == "forward")
            {
                cout << "\n\nYou enter a wide opening filled with crystalls along every surface of the walls and ceiling. You also notice precious gems littered around the beatiful crystals. You let out a slight gasp at the beauty and riches in front of you. The sound of your gasp slowly makes the crystals vibrate slowly. As some crystals vibrate, others start to vibrate even more. Soon the whole room is shaking when the crystals start coming down from the ceiling. One of them strikes you and you perish.";
            }
            else if (decision3 == "side")
            {
                cout << "\n\nYou lean over the edge and you see little shiny pieces flying upwards. You are amazed how such a natural phenominon of cave wind can propell pieces upward. As your interest grows you don't notice you slip off the edge. Suddenly you are also being propelled upward. You exit the cave back into the mist but the gust of wind is still taking you upward. You notice all around you the shiny pieces are various precious metals. Together you and the metals fly upward and you see the large mushroom at the beginning. You clear the fog and see a castle. The gust of wind takes you right towards the castle as you and the metals bounce off a mushroom in the middle of the caste and land safely in a room. You look around you and are astonish by the weath accumlated here. You live happily ever after.";
            }
            else
            {
                cout << "\n\nYou got lost. Please start over and try again.";
            }
        }
        else
        {
            cout << "\n\nYou got lost. Please start over and try again.";
        }
    }
    else
    {
        cout << "\n\nYou got lost. Please start over and try again.";
    }

    return 0;
}
