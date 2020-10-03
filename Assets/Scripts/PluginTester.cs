using System.Runtime.InteropServices;
using UnityEngine;

public class PluginTester : MonoBehaviour {
	private const string DLL_NAME = "Lecture4";

	public GameObject cube;

	[StructLayout(LayoutKind.Sequential)]
	struct Vector3D {
		public float x;
		public float y;
		public float z;
	}
	
	[DllImport(DLL_NAME, EntryPoint = "GetID")]
	private static extern int GetID();

	[DllImport(DLL_NAME, EntryPoint = "SetID")]
	private static extern void SetID(int a_id);

	[DllImport(DLL_NAME, EntryPoint = "GetPosition")]
	private static extern Vector3D GetPosition();
	
	[DllImport(DLL_NAME, EntryPoint = "SetPosition")]
	private static extern void SetPosition(float a_x, float a_y, float a_z);
	
	private void Update() {
		if (Input.GetKeyDown(KeyCode.S)) {
			SetID(911);
			Debug.Log(GetID());

			SetPosition(3.4f, 5.7f, 9.8f);

			var pos = GetPosition();
			cube.transform.position = new Vector3(pos.x, pos.y, pos.z);
		}
	}
}
