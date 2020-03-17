#ifndef GUARD_FOLLOW_ME_H
#define GUARD_FOLLOW_ME_H

#define FOLLOWER_FLAG_HAS_RUNNING_FRAMES 0x1
#define FOLLOWER_FLAG_CAN_BIKE 0x2
#define FOLLOWER_FLAG_CAN_LEAVE_ROUTE 0x4
#define FOLLOWER_FLAG_CAN_SURF 0x8
#define FOLLOWER_FLAG_CAN_WATERFALL 0x10
#define FOLLOWER_FLAG_CAN_DIVE 0x20
#define FOLLOWER_FLAG_CAN_ROCK_CLIMB 0x40
#define FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT 0x80

#define DEFAULT_FOLLOWER_LOCAL_ID 0xFE

#define MOVEMENT_INVALID 0xFE

// Exported Functions
void SetUpFollowerSprite(u8 localId, u8 flags);
void DestroyFollower(void);
void PlayerFaceFollowerSprite(void);
void CheckPlayerHasFollower(void);


#endif //GUARD_FOLLOW_ME_H