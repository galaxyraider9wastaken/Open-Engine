#define HITBOX2D_H
class HitBox2D{
  Vector2 Position;
  Vector2 Size;
  bool HitboxCollision;
  bool MouseCollision;
  bool Collide;
  HitBox2D(Vector2 position, Vector2 Size);
  HitBox2D();
  void Update();
}
#endif
