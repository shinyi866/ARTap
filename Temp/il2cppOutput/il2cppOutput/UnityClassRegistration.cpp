extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_AR();
	RegisterModule_AR();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; 
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 82 non stripped classes
	//0. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//1. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//2. Animation
	RegisterUnityClass<Animation>("Animation");
	//3. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//4. Animator
	RegisterUnityClass<Animator>("Animation");
	//5. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//6. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//7. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//8. Motion
	RegisterUnityClass<Motion>("Animation");
	//9. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//10. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//11. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//12. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//13. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//14. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//15. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//16. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//17. Camera
	RegisterUnityClass<Camera>("Core");
	//18. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//19. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//20. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//21. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//22. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//23. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//24. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//25. GameManager
	RegisterUnityClass<GameManager>("Core");
	//26. GameObject
	RegisterUnityClass<GameObject>("Core");
	//27. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//28. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//29. InputManager
	RegisterUnityClass<InputManager>("Core");
	//30. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//31. Light
	RegisterUnityClass<Light>("Core");
	//32. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//33. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//34. Material
	RegisterUnityClass<Material>("Core");
	//35. Mesh
	RegisterUnityClass<Mesh>("Core");
	//36. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//37. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//38. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//39. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//40. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//41. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//42. Object
	//Skipping Object
	//43. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//44. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//45. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//46. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//47. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//48. Renderer
	RegisterUnityClass<Renderer>("Core");
	//49. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//50. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//51. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//52. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//53. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//54. Shader
	RegisterUnityClass<Shader>("Core");
	//55. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//56. Sprite
	RegisterUnityClass<Sprite>("Core");
	//57. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//58. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//59. TagManager
	RegisterUnityClass<TagManager>("Core");
	//60. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//61. Texture
	RegisterUnityClass<Texture>("Core");
	//62. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//63. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//64. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//65. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//66. Transform
	RegisterUnityClass<Transform>("Core");
	//67. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//68. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//69. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//70. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//71. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//72. Collider
	RegisterUnityClass<Collider>("Physics");
	//73. Unity::FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//74. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//75. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//76. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//77. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//78. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//79. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//80. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//81. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");

}
