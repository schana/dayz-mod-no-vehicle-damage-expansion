modded class CarScript extends Car {
	override void OnContact (string zoneName, vector localPos, IEntity other, Contact data) {
		if (zoneName == "") {
			Print ("CarScript >> ERROR >> OnContact dmg zone not defined!");
			return;
		}

		switch (zoneName) {
			default : if (GetGame ().IsServer () && zoneName != "") {
				float dmgMin = 150.0;
				float dmgThreshold = 750.0;
				float dmg = data.Impulse * m_dmgContactCoef;

				if (dmg < dmgThreshold) {
					if (dmg > dmgMin) {
						SynchCrashLightSound (true);
					}
				} else {
					SynchCrashHeavySound (true);
				}
			}
			break;
		}
	}
}

modded class ExpansionWreck {
	override void EOnContact (IEntity other, Contact extra) { }
}

modded class ExpansionHelicopterScript {
	override void EOnContact (IEntity other, Contact extra) { }
}

modded class PlayerBase {
	override void ExpansionRegisterTransportHit (Transport transport) { }
}