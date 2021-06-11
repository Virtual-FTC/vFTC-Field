// GENERATED AUTOMATICALLY FROM 'Assets/PlayerControls.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @PlayerControls : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @PlayerControls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""PlayerControls"",
    ""maps"": [
        {
            ""name"": ""GamePlay"",
            ""id"": ""854d8615-e8e5-4a70-bb07-0cc16f2716c0"",
            ""actions"": [
                {
                    ""name"": ""Shoot"",
                    ""type"": ""Button"",
                    ""id"": ""11ca9ad5-3856-4abc-a401-2e7549c310af"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Intake"",
                    ""type"": ""Button"",
                    ""id"": ""17cb7798-7a5b-4456-8f18-84470ceafa54"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Spinup"",
                    ""type"": ""Button"",
                    ""id"": ""eab85a75-6bd1-420c-a68a-09950b0d935f"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Wobble"",
                    ""type"": ""Button"",
                    ""id"": ""1f23868b-40fb-400d-80a6-a75e8c8edad3"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""WobbleHigh"",
                    ""type"": ""Button"",
                    ""id"": ""4131396f-d7ee-4d2a-8c8b-9c0de45247bd"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""IncreaseSpin"",
                    ""type"": ""Button"",
                    ""id"": ""4e5b9ca1-392a-4127-924c-62881b3fe263"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""DecreaseSpin"",
                    ""type"": ""Button"",
                    ""id"": ""9c305c25-b5c7-4414-a0d8-e0ffd966c467"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""DriveForward"",
                    ""type"": ""Button"",
                    ""id"": ""12e1c52e-2f98-43ca-b547-b72012075913"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""DriveBack"",
                    ""type"": ""Button"",
                    ""id"": ""7205feec-1fb6-4b29-95c3-dee09bfe9541"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""DriveLeft"",
                    ""type"": ""Button"",
                    ""id"": ""dfc06430-2df9-45ec-8238-58e62a399fc8"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""DriveRight"",
                    ""type"": ""Button"",
                    ""id"": ""e3e0ee03-9283-4b0c-93f6-0c3823aa9abc"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""TurnLeft"",
                    ""type"": ""Button"",
                    ""id"": ""a91c5059-4e04-4ca7-b2c4-58149497cd85"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""TurnRight"",
                    ""type"": ""Button"",
                    ""id"": ""2c5f08f7-b84b-47af-890c-8cda6156311e"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""a363cbcc-7451-44d3-a8b3-f8451ccbbc8a"",
                    ""path"": ""<Gamepad>/rightTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Shoot"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""84796515-939a-4e2c-a32e-5be53ba0785e"",
                    ""path"": ""<Gamepad>/buttonWest"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Intake"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""b6bf42a7-1f10-45b5-8518-8de76289a128"",
                    ""path"": ""<Gamepad>/leftTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Spinup"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""c59b9c95-de85-44e5-8c83-da334bf1e719"",
                    ""path"": ""<Gamepad>/rightShoulder"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Wobble"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""021745b8-d34d-4ec1-9468-4ec1fcfa1139"",
                    ""path"": ""<Gamepad>/leftShoulder"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""WobbleHigh"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""ffdb7a1b-e98a-47ab-a9bd-354285050218"",
                    ""path"": ""<Gamepad>/dpad/up"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""IncreaseSpin"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""f97d6df9-de44-49b9-8098-5f9a5857494c"",
                    ""path"": ""<Gamepad>/dpad/down"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""DecreaseSpin"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""c6cda340-bf95-455b-9bbd-ff6c93a8afeb"",
                    ""path"": ""<Gamepad>/leftStick/up"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""DriveForward"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""1e57f54c-196d-4c6c-8f94-81b541850e02"",
                    ""path"": ""<Gamepad>/leftStick/down"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""DriveBack"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""69d86120-846d-4730-9ff0-9fbe75422c7d"",
                    ""path"": ""<Gamepad>/leftStick/left"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""DriveLeft"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""7e598d9d-c740-4bea-aaae-46b565e0f2b9"",
                    ""path"": ""<Gamepad>/leftStick/right"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""DriveRight"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""79123584-a5e3-41be-acb5-ddeaa81a8cf4"",
                    ""path"": ""<Gamepad>/rightStick/left"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""TurnLeft"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""438d2ed5-f7a2-47b0-afab-4881178a70ad"",
                    ""path"": ""<Gamepad>/rightStick/right"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""TurnRight"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // GamePlay
        m_GamePlay = asset.FindActionMap("GamePlay", throwIfNotFound: true);
        m_GamePlay_Shoot = m_GamePlay.FindAction("Shoot", throwIfNotFound: true);
        m_GamePlay_Intake = m_GamePlay.FindAction("Intake", throwIfNotFound: true);
        m_GamePlay_Spinup = m_GamePlay.FindAction("Spinup", throwIfNotFound: true);
        m_GamePlay_Wobble = m_GamePlay.FindAction("Wobble", throwIfNotFound: true);
        m_GamePlay_WobbleHigh = m_GamePlay.FindAction("WobbleHigh", throwIfNotFound: true);
        m_GamePlay_IncreaseSpin = m_GamePlay.FindAction("IncreaseSpin", throwIfNotFound: true);
        m_GamePlay_DecreaseSpin = m_GamePlay.FindAction("DecreaseSpin", throwIfNotFound: true);
        m_GamePlay_DriveForward = m_GamePlay.FindAction("DriveForward", throwIfNotFound: true);
        m_GamePlay_DriveBack = m_GamePlay.FindAction("DriveBack", throwIfNotFound: true);
        m_GamePlay_DriveLeft = m_GamePlay.FindAction("DriveLeft", throwIfNotFound: true);
        m_GamePlay_DriveRight = m_GamePlay.FindAction("DriveRight", throwIfNotFound: true);
        m_GamePlay_TurnLeft = m_GamePlay.FindAction("TurnLeft", throwIfNotFound: true);
        m_GamePlay_TurnRight = m_GamePlay.FindAction("TurnRight", throwIfNotFound: true);
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

    // GamePlay
    private readonly InputActionMap m_GamePlay;
    private IGamePlayActions m_GamePlayActionsCallbackInterface;
    private readonly InputAction m_GamePlay_Shoot;
    private readonly InputAction m_GamePlay_Intake;
    private readonly InputAction m_GamePlay_Spinup;
    private readonly InputAction m_GamePlay_Wobble;
    private readonly InputAction m_GamePlay_WobbleHigh;
    private readonly InputAction m_GamePlay_IncreaseSpin;
    private readonly InputAction m_GamePlay_DecreaseSpin;
    private readonly InputAction m_GamePlay_DriveForward;
    private readonly InputAction m_GamePlay_DriveBack;
    private readonly InputAction m_GamePlay_DriveLeft;
    private readonly InputAction m_GamePlay_DriveRight;
    private readonly InputAction m_GamePlay_TurnLeft;
    private readonly InputAction m_GamePlay_TurnRight;
    public struct GamePlayActions
    {
        private @PlayerControls m_Wrapper;
        public GamePlayActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @Shoot => m_Wrapper.m_GamePlay_Shoot;
        public InputAction @Intake => m_Wrapper.m_GamePlay_Intake;
        public InputAction @Spinup => m_Wrapper.m_GamePlay_Spinup;
        public InputAction @Wobble => m_Wrapper.m_GamePlay_Wobble;
        public InputAction @WobbleHigh => m_Wrapper.m_GamePlay_WobbleHigh;
        public InputAction @IncreaseSpin => m_Wrapper.m_GamePlay_IncreaseSpin;
        public InputAction @DecreaseSpin => m_Wrapper.m_GamePlay_DecreaseSpin;
        public InputAction @DriveForward => m_Wrapper.m_GamePlay_DriveForward;
        public InputAction @DriveBack => m_Wrapper.m_GamePlay_DriveBack;
        public InputAction @DriveLeft => m_Wrapper.m_GamePlay_DriveLeft;
        public InputAction @DriveRight => m_Wrapper.m_GamePlay_DriveRight;
        public InputAction @TurnLeft => m_Wrapper.m_GamePlay_TurnLeft;
        public InputAction @TurnRight => m_Wrapper.m_GamePlay_TurnRight;
        public InputActionMap Get() { return m_Wrapper.m_GamePlay; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(GamePlayActions set) { return set.Get(); }
        public void SetCallbacks(IGamePlayActions instance)
        {
            if (m_Wrapper.m_GamePlayActionsCallbackInterface != null)
            {
                @Shoot.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
                @Shoot.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
                @Shoot.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
                @Intake.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
                @Intake.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
                @Intake.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
                @Spinup.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
                @Spinup.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
                @Spinup.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
                @Wobble.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
                @Wobble.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
                @Wobble.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
                @WobbleHigh.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
                @WobbleHigh.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
                @WobbleHigh.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
                @IncreaseSpin.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
                @IncreaseSpin.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
                @IncreaseSpin.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
                @DecreaseSpin.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
                @DecreaseSpin.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
                @DecreaseSpin.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
                @DriveForward.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
                @DriveForward.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
                @DriveForward.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
                @DriveBack.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
                @DriveBack.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
                @DriveBack.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
                @DriveLeft.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
                @DriveLeft.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
                @DriveLeft.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
                @DriveRight.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
                @DriveRight.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
                @DriveRight.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
                @TurnLeft.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
                @TurnLeft.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
                @TurnLeft.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
                @TurnRight.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
                @TurnRight.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
                @TurnRight.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
            }
            m_Wrapper.m_GamePlayActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Shoot.started += instance.OnShoot;
                @Shoot.performed += instance.OnShoot;
                @Shoot.canceled += instance.OnShoot;
                @Intake.started += instance.OnIntake;
                @Intake.performed += instance.OnIntake;
                @Intake.canceled += instance.OnIntake;
                @Spinup.started += instance.OnSpinup;
                @Spinup.performed += instance.OnSpinup;
                @Spinup.canceled += instance.OnSpinup;
                @Wobble.started += instance.OnWobble;
                @Wobble.performed += instance.OnWobble;
                @Wobble.canceled += instance.OnWobble;
                @WobbleHigh.started += instance.OnWobbleHigh;
                @WobbleHigh.performed += instance.OnWobbleHigh;
                @WobbleHigh.canceled += instance.OnWobbleHigh;
                @IncreaseSpin.started += instance.OnIncreaseSpin;
                @IncreaseSpin.performed += instance.OnIncreaseSpin;
                @IncreaseSpin.canceled += instance.OnIncreaseSpin;
                @DecreaseSpin.started += instance.OnDecreaseSpin;
                @DecreaseSpin.performed += instance.OnDecreaseSpin;
                @DecreaseSpin.canceled += instance.OnDecreaseSpin;
                @DriveForward.started += instance.OnDriveForward;
                @DriveForward.performed += instance.OnDriveForward;
                @DriveForward.canceled += instance.OnDriveForward;
                @DriveBack.started += instance.OnDriveBack;
                @DriveBack.performed += instance.OnDriveBack;
                @DriveBack.canceled += instance.OnDriveBack;
                @DriveLeft.started += instance.OnDriveLeft;
                @DriveLeft.performed += instance.OnDriveLeft;
                @DriveLeft.canceled += instance.OnDriveLeft;
                @DriveRight.started += instance.OnDriveRight;
                @DriveRight.performed += instance.OnDriveRight;
                @DriveRight.canceled += instance.OnDriveRight;
                @TurnLeft.started += instance.OnTurnLeft;
                @TurnLeft.performed += instance.OnTurnLeft;
                @TurnLeft.canceled += instance.OnTurnLeft;
                @TurnRight.started += instance.OnTurnRight;
                @TurnRight.performed += instance.OnTurnRight;
                @TurnRight.canceled += instance.OnTurnRight;
            }
        }
    }
    public GamePlayActions @GamePlay => new GamePlayActions(this);
    public interface IGamePlayActions
    {
        void OnShoot(InputAction.CallbackContext context);
        void OnIntake(InputAction.CallbackContext context);
        void OnSpinup(InputAction.CallbackContext context);
        void OnWobble(InputAction.CallbackContext context);
        void OnWobbleHigh(InputAction.CallbackContext context);
        void OnIncreaseSpin(InputAction.CallbackContext context);
        void OnDecreaseSpin(InputAction.CallbackContext context);
        void OnDriveForward(InputAction.CallbackContext context);
        void OnDriveBack(InputAction.CallbackContext context);
        void OnDriveLeft(InputAction.CallbackContext context);
        void OnDriveRight(InputAction.CallbackContext context);
        void OnTurnLeft(InputAction.CallbackContext context);
        void OnTurnRight(InputAction.CallbackContext context);
    }
}
