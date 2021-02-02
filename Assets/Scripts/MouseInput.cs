// GENERATED AUTOMATICALLY FROM 'Assets/Scripts/Mouse.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @MouseInput : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @MouseInput()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""Mouse"",
    ""maps"": [
        {
            ""name"": ""Mouse"",
            ""id"": ""3993f6ca-dd80-4bed-9495-7c34f643ed85"",
            ""actions"": [
                {
                    ""name"": ""MouseClickRight"",
                    ""type"": ""Button"",
                    ""id"": ""73defc0f-fb94-4689-a410-95fcf9e57e7a"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""MousePosition"",
                    ""type"": ""Value"",
                    ""id"": ""dc882edc-c5ea-4f55-a456-90a89fe4243d"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""MouseClickLeft"",
                    ""type"": ""Button"",
                    ""id"": ""c3954539-147a-4fbd-8a85-49b22d7b23e4"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""7444dc03-600d-4177-9e2a-868172ffddd6"",
                    ""path"": ""<Mouse>/rightButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""MouseClickRight"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""9679c15b-dba0-4b67-a2c2-f4f03916fca6"",
                    ""path"": ""<Mouse>/position"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""MousePosition"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""39e1106e-96c9-4eb8-87c4-62f19409ef9d"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""MouseClickLeft"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // Mouse
        m_Mouse = asset.FindActionMap("Mouse", throwIfNotFound: true);
        m_Mouse_MouseClickRight = m_Mouse.FindAction("MouseClickRight", throwIfNotFound: true);
        m_Mouse_MousePosition = m_Mouse.FindAction("MousePosition", throwIfNotFound: true);
        m_Mouse_MouseClickLeft = m_Mouse.FindAction("MouseClickLeft", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // Mouse
    private readonly InputActionMap m_Mouse;
    private IMouseActions m_MouseActionsCallbackInterface;
    private readonly InputAction m_Mouse_MouseClickRight;
    private readonly InputAction m_Mouse_MousePosition;
    private readonly InputAction m_Mouse_MouseClickLeft;
    public struct MouseActions
    {
        private @MouseInput m_Wrapper;
        public MouseActions(@MouseInput wrapper) { m_Wrapper = wrapper; }
        public InputAction @MouseClickRight => m_Wrapper.m_Mouse_MouseClickRight;
        public InputAction @MousePosition => m_Wrapper.m_Mouse_MousePosition;
        public InputAction @MouseClickLeft => m_Wrapper.m_Mouse_MouseClickLeft;
        public InputActionMap Get() { return m_Wrapper.m_Mouse; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(MouseActions set) { return set.Get(); }
        public void SetCallbacks(IMouseActions instance)
        {
            if (m_Wrapper.m_MouseActionsCallbackInterface != null)
            {
                @MouseClickRight.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
                @MouseClickRight.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
                @MouseClickRight.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
                @MousePosition.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
                @MousePosition.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
                @MousePosition.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
                @MouseClickLeft.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
                @MouseClickLeft.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
                @MouseClickLeft.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
            }
            m_Wrapper.m_MouseActionsCallbackInterface = instance;
            if (instance != null)
            {
                @MouseClickRight.started += instance.OnMouseClickRight;
                @MouseClickRight.performed += instance.OnMouseClickRight;
                @MouseClickRight.canceled += instance.OnMouseClickRight;
                @MousePosition.started += instance.OnMousePosition;
                @MousePosition.performed += instance.OnMousePosition;
                @MousePosition.canceled += instance.OnMousePosition;
                @MouseClickLeft.started += instance.OnMouseClickLeft;
                @MouseClickLeft.performed += instance.OnMouseClickLeft;
                @MouseClickLeft.canceled += instance.OnMouseClickLeft;
            }
        }
    }
    public MouseActions @Mouse => new MouseActions(this);
    public interface IMouseActions
    {
        void OnMouseClickRight(InputAction.CallbackContext context);
        void OnMousePosition(InputAction.CallbackContext context);
        void OnMouseClickLeft(InputAction.CallbackContext context);
    }
}
