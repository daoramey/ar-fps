template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_AR();
	RegisterModule_AR();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Wind();
	RegisterModule_Wind();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
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
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
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
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; template <> void RegisterClass<NavMeshObstacle>();
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>();
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 93 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. RenderSettings
	RegisterClass<RenderSettings>();
	//6. LevelGameManager
	RegisterClass<LevelGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. Renderer
	RegisterClass<Renderer>();
	//11. LineRenderer
	RegisterClass<LineRenderer>();
	//12. GUIElement
	RegisterClass<GUIElement>();
	//13. GUILayer
	RegisterClass<GUILayer>();
	//14. Light
	RegisterClass<Light>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. Shader
	RegisterClass<Shader>();
	//17. NamedObject
	RegisterClass<NamedObject>();
	//18. Material
	RegisterClass<Material>();
	//19. Sprite
	RegisterClass<Sprite>();
	//20. TextAsset
	RegisterClass<TextAsset>();
	//21. Texture
	RegisterClass<Texture>();
	//22. Texture2D
	RegisterClass<Texture2D>();
	//23. Texture3D
	RegisterClass<Texture3D>();
	//24. RenderTexture
	RegisterClass<RenderTexture>();
	//25. Transform
	RegisterClass<Transform>();
	//26. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//27. MeshFilter
	RegisterClass<MeshFilter>();
	//28. Mesh
	RegisterClass<Mesh>();
	//29. AudioClip
	RegisterClass<AudioClip>();
	//30. SampleClip
	RegisterClass<SampleClip>();
	//31. AudioListener
	RegisterClass<AudioListener>();
	//32. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//33. AudioSource
	RegisterClass<AudioSource>();
	//34. Rigidbody
	RegisterClass<Rigidbody>();
	//35. Unity::Joint
	RegisterClass<Unity::Joint>();
	//36. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//37. Collider
	RegisterClass<Collider>();
	//38. BoxCollider
	RegisterClass<BoxCollider>();
	//39. SphereCollider
	RegisterClass<SphereCollider>();
	//40. MeshCollider
	RegisterClass<MeshCollider>();
	//41. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//42. CharacterController
	RegisterClass<CharacterController>();
	//43. NavMeshData
	RegisterClass<NavMeshData>();
	//44. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//45. Animation
	RegisterClass<Animation>();
	//46. Animator
	RegisterClass<Animator>();
	//47. ParticleSystem
	RegisterClass<ParticleSystem>();
	//48. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//49. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//50. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//51. UI::Canvas
	RegisterClass<UI::Canvas>();
	//52. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//53. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//54. Terrain
	RegisterClass<Terrain>();
	//55. TerrainData
	RegisterClass<TerrainData>();
	//56. MeshRenderer
	RegisterClass<MeshRenderer>();
	//57. NavMeshObstacle
	RegisterClass<NavMeshObstacle>();
	//58. PreloadData
	RegisterClass<PreloadData>();
	//59. Cubemap
	RegisterClass<Cubemap>();
	//60. Texture2DArray
	RegisterClass<Texture2DArray>();
	//61. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//62. BuildSettings
	RegisterClass<BuildSettings>();
	//63. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//64. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//65. InputManager
	RegisterClass<InputManager>();
	//66. PlayerSettings
	RegisterClass<PlayerSettings>();
	//67. ResourceManager
	RegisterClass<ResourceManager>();
	//68. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//69. ScriptMapper
	RegisterClass<ScriptMapper>();
	//70. TagManager
	RegisterClass<TagManager>();
	//71. TimeManager
	RegisterClass<TimeManager>();
	//72. MonoManager
	RegisterClass<MonoManager>();
	//73. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//74. NetworkManager
	RegisterClass<NetworkManager>();
	//75. MonoScript
	RegisterClass<MonoScript>();
	//76. PhysicsManager
	RegisterClass<PhysicsManager>();
	//77. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//78. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//79. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//80. AudioManager
	RegisterClass<AudioManager>();
	//81. FlareLayer
	RegisterClass<FlareLayer>();
	//82. LightProbes
	RegisterClass<LightProbes>();
	//83. LightmapSettings
	RegisterClass<LightmapSettings>();
	//84. Avatar
	RegisterClass<Avatar>();
	//85. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//86. AnimatorController
	RegisterClass<AnimatorController>();
	//87. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//88. AnimationClip
	RegisterClass<AnimationClip>();
	//89. Motion
	RegisterClass<Motion>();
	//90. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//91. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//92. NavMeshSettings
	RegisterClass<NavMeshSettings>();

}
