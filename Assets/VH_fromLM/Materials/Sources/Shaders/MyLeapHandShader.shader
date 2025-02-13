Shader "Custom/MyLeapHandShader"
{
    Properties
    {
        _MainTex("Base (RGB)", 2D) = "white" {}
        _BumpMap("Normalmap", 2D) = "bump" {}
        _MaskTex("MaskTex", 2D) = "white" {}
        _Color("Main Color", Color) = (1,1,1,1)
        _Shininess("Shininess", Range(0.01, 1)) = 0.078125
        _IsShowArm("IsShowArm", int) = 1
        _Alpha("Alpha", Range(0, 1)) = 1
    }
        SubShader
        {

            Tags { "RenderType" = "Opaque" "Queue" = "Geometry" }
            //Tags {"Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent"}
            cull Back	//Back, Front, off
            ZWrite On   // On, Off
            ZTest Less

            LOD 200
            // デプスバッファのみにレンダリングする追加パス




            CGPROGRAM
            #pragma surface surf Standard alpha:blend // fade, preMultiply, blend

            struct Input
            {
                float2 uv_MainTex;
                float2 uv_BumpMap;
                float3 worldPos;
                float3 localPos : vertex;
            };
            sampler2D _MainTex;
            sampler2D _BumpMap;
            sampler2D _MaskTex;
            fixed4 _Color;
            float _Shininess;
            int _IsShowArm;
            half _Alpha;



            void surf(Input IN, inout SurfaceOutputStandard o)
            {
                // 腕非表示モードで腕領域のメッシュの場合は何もせずに終了する
                if (_IsShowArm < 0.5 && tex2D(_MaskTex, IN.uv_MainTex).r == 0)
                    discard;

                // Albedo comes from diffuse texture
                fixed4 c = tex2D(_MainTex, IN.uv_MainTex) * _Color;
                o.Albedo = c.rgb;
                o.Alpha = _Alpha;

                // Shininess comes from specular map alpha channel
                o.Metallic = 0;
                o.Smoothness = tex2D(_BumpMap, IN.uv_BumpMap).a * _Shininess;
            }

            ENDCG
        }
            FallBack "Diffuse"
}

